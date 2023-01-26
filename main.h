#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>

/**
 * _printf - function that produces output according to a format
 * @format: format specifier
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...);

/**
 * struct printer_func - associates format specifier wth printing function
 * @c: format specifier
 * @f: pointer to printing function
 *
 */
typedef struct printer_func
{
	char c;
	int (*f)(va_list);
} printer;

/**
 * print_char - prints a char variable
 * @c: variable to print
 *
 * Return: number of characters printed
 */
int print_char(va_list c);

/**
 * print_string - prints a string variable
 * @c: variable to print
 *
 * Return: number of characters printed
 */
int print_string(va_list c);

int (*get_conversion(const char *c))(va_list);

#endif /* #ifndef _MAIN_H_ */

