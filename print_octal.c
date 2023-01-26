#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

/**
 * print_octal - prints an integer in octal to stdout
 * @args: variable to print
 *
 * Description: the integer is first converted to a string then printed
 * Return: number of characters printed
 */
int print_octal(va_list args)
{
	int size, n, k;
	char *buffer;

	n = va_arg(args, int);
	buffer = malloc(sizeof(n) + 1);
	if (buffer != NULL)
		size = sprintf(buffer, "%o", n);
	k = (write(1, buffer, size));
	free(buffer);
	return(k);
}

