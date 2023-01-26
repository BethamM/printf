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
	int size, n, k;
	char *buffer;

	n = va_arg(args, int);
	buffer = malloc(sizeof(n) + 1);
	if (buffer != NULL)
		size = sprintf(buffer, "%d", n);
	k = (write(1, buffer, size));
	free(buffer);
	return(k);
}

/**
 * print_unsigned - prints an unsigned int to stdout
 * @args: variable to print
 *
 * Return: number of characters printed
 */
int print_unsigned(va_list args)
{
	unsigned int size, n, k;
	char *buffer;

	n = va_arg(args, unsigned int);
	buffer = malloc(sizeof(n) + 1);

	if (buffer != NULL)
		size = sprintf(buffer, "%u", n);
	k = (write(1, buffer, size));
	free(buffer);
	return(k);
}
