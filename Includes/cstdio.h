#ifndef __CSTDLIB__
#define __CSTDLIB__

/* ------------------------------------------------

    cstdlib.h - a C++ header of C header <stdio.h>

    This header provides miscellaneous utilities and
    symbols. content is from cppreference.com

    Initially written in November 8, 2019
    By Kangjun Heo (0x00000FF)

  ------------------------------------------------- */

namespace pstd {
  using size_t = /* see definition */;
  using FILE = /* see definition */ ;
  using fpos_t = /* see definition */ ;
}
 
#define NULL /* see definition */
#define _IOFBF /* see definition */
#define _IOLBF /* see definition */
#define _IONBF /* see definition */
#define BUFSIZ /* see definition */
#define EOF /* see definition */
#define FOPEN_MAX /* see definition */
#define FILENAME_MAX /* see definition */
#define L_tmpnam /* see definition */
#define SEEK_CUR /* see definition */
#define SEEK_END /* see definition */
#define SEEK_SET /* see definition */
#define TMP_MAX /* see definition */
#define stderr /* see definition */
#define stdin /* see definition */
#define stdout /* see definition */
 
namespace pstd {
  int remove(const char* filename);
  int rename(const char* old, const char* new);
  FILE* tmpfile();
  char* tmpnam(char* s);
  int fclose(FILE* stream);
  int fflush(FILE* stream);
  FILE* fopen(const char* filename, const char* mode);
  FILE* freopen(const char* filename, const char* mode, FILE* stream);
  void setbuf(FILE* stream, char* buf);
  int setvbuf(FILE* stream, char* buf, int mode, size_t size);
  int fprintf(FILE* stream, const char* format, ...);
  int fscanf(FILE* stream, const char* format, ...);
  int printf(const char* format, ...);
  int scanf(const char* format, ...);
  int snprintf(char* s, size_t n, const char* format, ...);
  int sprintf(char* s, const char* format, ...);
  int sscanf(const char* s, const char* format, ...);
  int vfprintf(FILE* stream, const char* format, va_list arg);
  int vfscanf(FILE* stream, const char* format, va_list arg);
  int vprintf(const char* format, va_list arg);
  int vscanf(const char* format, va_list arg);
  int vsnprintf(char* s, size_t n, const char* format, va_list arg);
  int vsprintf(char* s, const char* format, va_list arg);
  int vsscanf(const char* s, const char* format, va_list arg);
  int fgetc(FILE* stream);
  char* fgets(char* s, int n, FILE* stream);
  int fputc(int c, FILE* stream);
  int fputs(const char* s, FILE* stream);
  int getc(FILE* stream);
  int getchar();
  int putc(int c, FILE* stream);
  int putchar(int c);
  int puts(const char* s);
  int ungetc(int c, FILE* stream);
  size_t fread(void* ptr, size_t size, size_t nmemb, FILE* stream);
  size_t fwrite(const void* ptr, size_t size, size_t nmemb, FILE* stream);
  int fgetpos(FILE* stream, fpos_t* pos);
  int fseek(FILE* stream, long int offset, int whence);
  int fsetpos(FILE* stream, const fpos_t* pos);
  long int ftell(FILE* stream);
  void rewind(FILE* stream);
  void clearerr(FILE* stream);
  int feof(FILE* stream);
  int ferror(FILE* stream);
  void perror(const char* s);
}

#endif