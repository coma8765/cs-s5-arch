/* Independent implementation of experiment 4 from the supplied manual.
 * Used only if PCLAB's BORLNDMM allocator fails. This is not PCLAB.
 * Build: i686-w64-mingw32-gcc -O2 -fno-tree-vectorize -Wall -Wextra
 *        -mwindows experiment4.c -o experiment4.exe -lgdi32
 */
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STREAMS 8
#define REPEATS 5
#define WORDS (1024u * 1024u / sizeof(uint32_t))
#define COLD_WORDS (32u * 1024u * 1024u / sizeof(uint32_t))
static double separate[STREAMS], packed[STREAMS], frequency;
static volatile uint32_t *arrays[STREAMS], *interleaved, *cold;
static volatile uint64_t sink;
static int completed, failed;
static HWND window_handle;
static char status_text[256] = "Running measured loops...";

static double stamp(void) {
    LARGE_INTEGER t;
    QueryPerformanceCounter(&t);
    return (double)t.QuadPart * 1000000.0 / frequency;
}
static void prepare_cache(void) {
    uint64_t sum = 0;
    for (size_t j = 0; j < COLD_WORDS; j += 16) sum += cold[j];
    sink = sum;
}
static double measure(int r, int joined, uint64_t *checksum) {
    uint64_t sum = 0;
    prepare_cache();
    double begin = stamp();
    if (joined) {
        for (size_t a = 0; a < WORDS * (size_t)r; a += (size_t)r)
            for (int b = 0; b < r; ++b) sum += interleaved[a + (size_t)b];
    } else {
        for (size_t a = 0; a < WORDS; ++a)
            for (int b = 0; b < r; ++b) sum += arrays[b][a];
    }
    double duration = stamp() - begin;
    sink = sum;
    *checksum = sum;
    return duration;
}
static int cmp_double(const void *a, const void *b) {
    double x = *(const double *)a, y = *(const double *)b;
    return (x > y) - (x < y);
}
static DWORD WINAPI run_experiment(LPVOID unused) {
    (void)unused;
    FILE *all = fopen("exp4_reproduced_repeats.csv", "w");
    FILE *out = fopen("exp4_reproduced.csv", "w");
    if (!all || !out) { failed = 1; goto end; }
    fprintf(all, "streams,repeat,separate_us,interleaved_us,checksum_separate,checksum_interleaved,expected\n");
    fprintf(out, "streams,separate_median_us,interleaved_median_us\n");
    LARGE_INTEGER f; QueryPerformanceFrequency(&f); frequency = (double)f.QuadPart;
    for (int b = 0; b < STREAMS; ++b) {
        arrays[b] = VirtualAlloc(NULL, WORDS * sizeof(uint32_t), MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
        if (!arrays[b]) { failed = 1; goto end; }
        for (size_t a = 0; a < WORDS; ++a) arrays[b][a] = (uint32_t)(a & 1023u);
    }
    interleaved = VirtualAlloc(NULL, WORDS * STREAMS * sizeof(uint32_t), MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
    cold = VirtualAlloc(NULL, COLD_WORDS * sizeof(uint32_t), MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
    if (!interleaved || !cold) { failed = 1; goto end; }
    for (size_t a = 0; a < COLD_WORDS; ++a) cold[a] = (uint32_t)a;
    for (int r = 1; r <= STREAMS; ++r) {
        for (size_t a = 0; a < WORDS; ++a)
            for (int b = 0; b < r; ++b) interleaved[a * (size_t)r + (size_t)b] = arrays[b][a];
        double x[REPEATS], y[REPEATS];
        uint64_t expected = (uint64_t)(WORDS / 1024u) * 1023u * 1024u / 2u * (uint64_t)r;
        for (int rep = 0; rep < REPEATS; ++rep) {
            uint64_t sum_x, sum_y;
            if (rep & 1) {
                y[rep] = measure(r, 1, &sum_y); x[rep] = measure(r, 0, &sum_x);
            } else {
                x[rep] = measure(r, 0, &sum_x); y[rep] = measure(r, 1, &sum_y);
            }
            if (sum_x != expected || sum_y != expected) { failed = 1; goto end; }
            fprintf(all, "%d,%d,%.6f,%.6f,%llu,%llu,%llu\n", r, rep + 1, x[rep], y[rep], (unsigned long long)sum_x, (unsigned long long)sum_y, (unsigned long long)expected);
        }
        qsort(x, REPEATS, sizeof(double), cmp_double); qsort(y, REPEATS, sizeof(double), cmp_double);
        separate[r-1] = x[REPEATS/2]; packed[r-1] = y[REPEATS/2];
        fprintf(out, "%d,%.6f,%.6f\n", r, separate[r-1], packed[r-1]);
        fflush(all); fflush(out);
        completed = r; PostMessage(window_handle, WM_APP, 0, 0);
    }
end:
    if (all) fclose(all);
    if (out) fclose(out);
    for (int b = 0; b < STREAMS; ++b) if (arrays[b]) VirtualFree((void *)arrays[b], 0, MEM_RELEASE);
    if (interleaved) VirtualFree((void *)interleaved, 0, MEM_RELEASE);
    if (cold) VirtualFree((void *)cold, 0, MEM_RELEASE);
    snprintf(status_text, sizeof(status_text), "%s", failed ? "FAILED: allocation, output or checksum error" : "PASS: all 80 checksums match; CSV files saved");
    PostMessage(window_handle, WM_APP, 0, 0);
    return 0;
}
static LRESULT CALLBACK procedure(HWND h, UINT msg, WPARAM wp, LPARAM lp) {
    if (msg == WM_APP) { InvalidateRect(h, NULL, TRUE); return 0; }
    if (msg == WM_PAINT) {
        PAINTSTRUCT ps; HDC dc = BeginPaint(h, &ps);
        RECT rect; GetClientRect(h, &rect);
        FillRect(dc, &rect, (HBRUSH)(COLOR_WINDOW + 1));
        HFONT font = CreateFontA(21,0,0,0,FW_NORMAL,FALSE,FALSE,FALSE,DEFAULT_CHARSET,0,0,0,0,"Segoe UI");
        HGDIOBJ old_font = SelectObject(dc, font); SetBkMode(dc, TRANSPARENT);
        const char *lines[] = {"LR3 / Experiment 4: independent implementation of the supplied algorithm", "Not PCLAB. PCLAB failed in BORLNDMM.DLL; original distribution is unchanged.", "Windows x86 / QEMU TCG. 1 MiB per stream; 1..8 streams; 5 repeats; median.", "QPC time, microseconds. 32 MiB preparatory memory sweep before each timed loop.", "Array values and expected checksums are identical in both layouts."};
        for (int n=0;n<5;++n) TextOutA(dc,28,20+n*28,lines[n],(int)strlen(lines[n]));
        const char *header = "Streams       Separate arrays (us)       Interleaved (us)       Ratio";
        TextOutA(dc,28,180,header,(int)strlen(header));
        double total_x=0,total_y=0;
        for (int r=0;r<completed;++r) {
            char line[200]; snprintf(line,sizeof(line),"%d                   %12.3f                     %12.3f                  %.3f",r+1,separate[r],packed[r],separate[r]/packed[r]);
            TextOutA(dc,28,220+r*32,line,(int)strlen(line)); total_x+=separate[r];total_y+=packed[r];
        }
        if (completed) { char line[150];snprintf(line,sizeof(line),"Sum of medians: separate / interleaved = %.6f",total_x/total_y);TextOutA(dc,28,500,line,(int)strlen(line)); }
        TextOutA(dc,28,550,status_text,(int)strlen(status_text));
        const char *note="These timings describe this emulated run, not physical cache/DRAM hardware.";
        TextOutA(dc,28,600,note,(int)strlen(note));
        SelectObject(dc,old_font);DeleteObject(font);EndPaint(h,&ps);return 0;
    }
    if (msg==WM_DESTROY) { PostQuitMessage(0);return 0; }
    return DefWindowProc(h,msg,wp,lp);
}
int WINAPI WinMain(HINSTANCE instance,HINSTANCE previous,LPSTR command,int show) {
    (void)previous;(void)command;(void)show;
    SetCurrentDirectoryA("C:\\user\\ananyev\\lr3");
    WNDCLASSA wc={0};wc.lpfnWndProc=procedure;wc.hInstance=instance;wc.lpszClassName="LR3Experiment4";wc.hCursor=LoadCursor(NULL,IDC_ARROW);
    RegisterClassA(&wc);
    window_handle=CreateWindowA(wc.lpszClassName,"LR3 - experiment 4 - independent measured reproduction",WS_OVERLAPPEDWINDOW,CW_USEDEFAULT,CW_USEDEFAULT,1250,740,NULL,NULL,instance,NULL);
    ShowWindow(window_handle,SW_MAXIMIZE);UpdateWindow(window_handle);
    HANDLE thread=CreateThread(NULL,0,run_experiment,NULL,0,NULL);if(thread)CloseHandle(thread);
    MSG msg;while(GetMessage(&msg,NULL,0,0)>0){TranslateMessage(&msg);DispatchMessage(&msg);}return 0;
}
