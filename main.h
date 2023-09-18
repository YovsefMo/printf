#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _printf_char_string_percent(va_list args, const char *format);
int _printf_integer(int di);
int _printf_binary(va_list args);

#endif /* MAIN_H */
