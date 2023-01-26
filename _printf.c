#include "main.h"
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stddef.h>

/**
 * _printf - function that produces output according to a format
 * @format: format specifier
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int len, i;
	va_list args;
	const char *c;
	int characters;

	len = strlen(format);
	va_start(args, format);
	characters = 0;

	for (i = 0; i < len; i++)
	{
		c = format + i;
		if (*c == '%' && get_conversion(c + 1) != NULL)
		{
			characters += get_conversion(c + 1)(args);
			i++;
		}
		else
			characters += write(1, c, 1);
	}
	va_end(args);
	return (characters);
}
