#include "main.h"
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * print_string - prints a string
 * @a: argument to be printed
 *
 * Return: number of characters printed
 */
int print_string(va_list a)
{
	char *str = va_arg(a, char *);

	return (write(1, str, strlen(str)));
}
