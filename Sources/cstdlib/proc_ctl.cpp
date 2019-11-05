/* ------------------------------------------------

    cstdlib/proc_ctl - process control functions of cstdlib

    Initially written in November 5, 2019
    By Kangjun Heo (0x00000FF)

  ------------------------------------------------- */

#include <cstdlib>

[[noreturn]]
void abort() noexcept { }
[[noreturn]]
void exit(int exit_code) { }
[[noreturn]]
void quick_exit(int exit_code) noexcept { }
[[noreturn]]
void _Exit(int exit_code) noexcept { }
int atexit(atexit_handler   *func) noexcept { }
int atexit(c_atexit_handler *func) noexcept { }
int at_quick_exit(atexit_handler   *func) noexcept { }
int at_quick_exit(c_atexit_handler *func) noexcept { }
int   system(const char* command) { }
char *getenv(const char* env_var) { }