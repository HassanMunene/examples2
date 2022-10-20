#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int print_char(int *i, va_list ptr, const char *format, int *count);
int _putchar(char c);
#endif
