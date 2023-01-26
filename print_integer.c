#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

/**
 * print_integer - prints an integer to stdout
 * @args: variable to print
 *
 * Description: the integer is first converted to a string then printed
 * Return: number of characters printed
 */
int print_integer(va_list args)
{
	int size, n;
	char *buffer;

	n = va_arg(args, int);
	buffer = malloc(sizeof(n) + 1);
	if (buffer != NULL)
		size = sprintf(buffer, "%d", n);
	return (write(1, buffer, size));
}
