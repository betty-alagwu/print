
#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
<<<<<<< HEAD

int _printf(const char *format, ...);
int _write_string(va_list arguments);
int _write_char(char element);
int _write_integer(va_list arguments);
=======
#include <stdio.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/* FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/* SIZES */
#define S_LONG 2
#define S_SHORT 1

/**
 * struct fmt - Struct op
 *
 * @fmt: The format.
 * @fn: The function associated.
 */
struct fmt
{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);
};


/**
 * typedef struct fmt fmt_t - Struct op
 *
 * @fmt: The format.
 * @fm_t: The function associated.
 */
typedef struct fmt fmt_t;

int _printf(const char *format, ...);
int _print_formatted_output(const char *fmt, int *i,
va_list list, char buffer[], int flags, int width, int precision, int size);

/* Funtions to print chars and strings */
int _print_single_char(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int _handle_print_string(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int _handle_print_escaped_percent(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/* print numbers, integers, octals, binaries, hexadecimals */
int _handle_print_integer(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int _handle_print_binary(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int _handle_print_unsigned(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int _handle_print_octal(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int _handle__handle_print_hexadecimal(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int _handle__handle_print_hexa_upper(va_list types, char buffer[],
	int flags, int width, int precision, int size);

int _handle_print_hexa(va_list types, char map_to[],
char buffer[], int flags, char flag_ch, int width, int precision, int size);

/* print non printable characters */
int _handle_non_printable(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/* print memory address */
int _handle_print_pointer(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/* other specifiers */
int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int get_precision(const char *format, int *i, va_list list);
int get_size(const char *format, int *i);

/*print string in reverse*/
int _handle_print_reverse(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/*print a string in rot 13*/
int print_rot13string(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/* width handler */
int handle_write_char(char c, char buffer[],
	int flags, int width, int precision, int size);
int write_number(int is_positive, int ind, char buffer[],
	int flags, int width, int precision, int size);
int write_num(int ind, char bff[], int flags, int width, int precision,
	int length, char padd, char extra_c);
int write_pointer(char buffer[], int ind, int length,
	int width, int flags, char padd, char extra_c, int padd_start);

int write_unsgnd(int is_negative, int ind,
char buffer[],
	int flags, int width, int precision, int size);

/****************** UTILS ******************/
int is_printable(char);
int append_hexa_code(char, char[], int);
int is_digit(char);

long int convert_size_number(long int num, int size);
long int convert_size_unsgnd(unsigned long int num, int size);
>>>>>>> f9e7ca3bdb5c6ce1e5b49631c1839dd840ba7efc

#endif /* MAIN_H */
