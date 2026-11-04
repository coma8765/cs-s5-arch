set -e
cd /cygdrive/c/user/sopc01
nios2-bsp hal software/hello_bsp nios.sopcinfo --default_stdio uart_0 --default_sys_timer none --set hal.enable_small_c_library true --set hal.enable_reduced_device_drivers true --set hal.enable_lightweight_device_driver_api true --set hal.enable_exit false --set hal.enable_clean_exit false --set hal.enable_c_plus_plus false --set hal.make.bsp_cflags_optimization -Os --set hal.make.bsp_cflags_user_flags -funsigned-char
nios2-app-generate-makefile --bsp-dir software/hello_bsp --app-dir software/hello --src-files software/hello/hello_world_small.c --elf-name hello.elf --set APP_CFLAGS_OPTIMIZATION -Os --set APP_CFLAGS_USER_FLAGS -funsigned-char
make -C software/hello
make -C software/hello mem_init_generate
