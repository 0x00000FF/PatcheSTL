#ifndef __CSTDLIB__
#define __CSTDLIB__

/* ------------------------------------------------

    cstdlib.h - a C++ header of C header <stdlib.h>

    This header provides miscellaneous utilities and
    symbols. content is from cppreference.com

    Initially written in November 5, 2019
    By Kangjun Heo (0x00000FF)

  ------------------------------------------------- */

namespace pstd
{
    typedef
        unsigned int
        size_t;

    typedef 
        struct {int, int}
        div_t;
        
    typedef 
        struct {long, long})
        ldiv_t;

    typedef 
        struct {long long, long long}
        lldiv_t;
}

/* Exit status */
#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

/* Maximum bytes for multibyte character */
#define MB_CUR_MAX   
#define NULL         0
#define RAND_MAX     0x7fff

namespace pstd 
{
    extern "C++" using atexit_handler   = void();
    extern "C"   using c_atexit_handler = void();

    extern "C++" using compare_pred    = int(const void*, const void*);
    extern "C"   using c_compare_pred  = int(const void*, const void*);

    /* Process control */
    [[noreturn]]
    void abort() noexcept;

    [[noreturn]]
    void exit(int exit_code);

    [[noreturn]]
    void quick_exit(int exit_code) noexcept;

    [[noreturn]]
    void _Exit(int exit_code) noexcept;

    int atexit(atexit_handler   *func) noexcept;
    int atexit(c_atexit_handler *func) noexcept;

    int at_quick_exit(atexit_handler   *func) noexcept;
    int at_quick_exit(c_atexit_handler *func) noexcept;

    int   system(const char* command);
    char *getenv(const char* env_var);

    /* Memory management */
    void *malloc(pstd::size_t size);
    void *aligned_alloc(pstd::size_t alignment, pstd::size_t size);
    void *calloc(pstd::size_t num, pstd::size_t size);
    void *realloc(void *ptr, pstd::size_t new_size);
    void  free(void *ptr);

    /* Numeric string conversion */
    double    atof (const char *str);
    int       atoi (const char *str);
    long      atol (const char *str);
    long long atoll(const char *str);
    long      strtol(const char *str, char **str_end, int base);
    long long strtoll(const char *str, char **str_end, int base);
    unsigned long      strtoul (const char *str, char **str_end, int base);
    unsigned long long strtoull(const char *str, char **str_end, int base);
    float       strtof( const char* str, char** str_end );
    double      strtod( const char* str, char** str_end );
    long double strtold( const char* str, char** str_end );

    /* Wide string manipulation */
    int mblen(const char* s, pstd::size_t n);
    int mbtowc(wchar_t* pwc, const char* s, pstd::size_t n );
    int wctomb(char *s, wchar_t wc);
    pstd::size_t mbstowcs(wchar_t* dst, const char* src, pstd::size_t len);
    pstd::size_t wcstombs(char* dst, const wchar_t* src, pstd::size_t len);

    /* Miscellaneous algorithms and math */
    int rand();
    void srand(unsigned seed);

    void qsort(void *ptr, pstd::size_t count, pstd::size_t size, compare_pred*   comp);
    void qsort(void *ptr, pstd::size_t count, pstd::size_t size, c_compare_pred* comp);
    void* bsearch(const void* key, const void* ptr, pstd::size_t count, pstd::size_t size, compare_pred* comp);
    void* bsearch(const void* key, const void* ptr, pstd::size_t count, pstd::size_t size, c_compare_pred* comp);

    int       abs( int n );
    long      abs( long n );
    long long abs( long long n );
    long      labs( long n );
    long long llabs( long long n );
    
    #include <cinttypes>

    pstd::intmax_t abs    (pstd::intmax_t n);
    pstd::intmax_t imaxabs(pstd::intmax_t n);

    pstd::div_t     div(int x, int y);
    pstd::ldiv_t    div(long x, long y);
    pstd::lldiv_t   div(long long x, long long y);
    pstd::ldiv_t    ldiv(long x, long y);
    pstd::lldiv_t   lldiv(long long x, long long y);
    pstd::imaxdiv_t div(std::intmax_t x, std::intmax_t y);
    pstd::imaxdiv_t imaxdiv(std::intmax_t x, std::intmax_t y);
}

#endif 