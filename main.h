#include <stdarg.h>

#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);
int _write_string(va_list arguments);
int _write_char(char element);

#endif
