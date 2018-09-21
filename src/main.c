
#include <float.h>

#ifdef MARCO_PRINTF
#include <sys/unistd.h>
#include <sys/types.h>

#include "printf.h"

extern ssize_t _write(int fd, const void* ptr, size_t len);

void _putchar(char character) {
  _write(STDOUT_FILENO, &character, 1);
}
#else

#include <stdio.h>

void _putchar(char character) {
  // can't exclude marco's printf.c per configuration, so this is to
  // make printf.c happy when it's compiled, but it will not be used
}

#endif


int main() {
  printf("Small test to see footprint changes of different compile settings\n");
  printf("Embedded floating %f and small %f\n", 123.4567f, 0.000412356f);
  while (1);
}
