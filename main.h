#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

int _printf(const char *format, ...);
int _printf_char_string_percent(va_list args, const char *format);
int _printf_integer(int di);

#endif /* MAIN_H */
