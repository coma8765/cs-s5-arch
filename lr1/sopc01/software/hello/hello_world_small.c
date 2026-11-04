#include "sys/alt_stdio.h"
#include "system.h"
#include "altera_avalon_sysid_qsys.h"
#include "altera_avalon_sysid_qsys_regs.h"

static void print_system_id(void)
{
    const char digits[] = "0123456789ABCDEF";
    unsigned long id = IORD_ALTERA_AVALON_SYSID_QSYS_ID(SYSID_QSYS_0_BASE);
    int shift;
    for (shift = 28; shift >= 0; shift -= 4) {
        alt_putchar(digits[(id >> shift) & 0xFUL]);
    }
    alt_putchar('\n');
}

int main(void)
{
    alt_putstr("Hello from System on Chip\n");
    alt_putstr("System ID: ");
    print_system_id();
    alt_putstr("Send any character\n");
    for (;;) {
        int ch = alt_getchar();
        if (ch >= 0) {
            alt_putchar(ch);
        }
    }
    return 0;
}
