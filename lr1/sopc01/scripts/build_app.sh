set -ex
cd /cygdrive/c/user/sopc01
nios2-app-generate-makefile --bsp-dir software/hello_bsp --app-dir software/hello --src-files software/hello/hello_world_small.c --elf-name hello.elf --set APP_CFLAGS_OPTIMIZATION -Os --set APP_CFLAGS_USER_FLAGS -funsigned-char
make -C software/hello
make -C software/hello mem_init_generate
