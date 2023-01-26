#include "main.h"
#include <unistd.h>
#include <stdarg.h>
/**
 * print_char - prints a char variable
 * @c: argument to be printed
 *
 * Return: number of characters written
 */
int print_char(va_list c)
{
	char ch = va_arg(c, int);

	return (write(1, &ch, 1));
}
