#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

/**
 * print_hexa - prints an integer in hexadecimal form to stdout
 * @args: variable to print
 *
 * Description: the integer is first converted to a string then printed
 * Return: number of characters printed
 */
int print_hexa(va_list args)
{
	int size, n, k;
	char *buffer;

	n = va_arg(args, int);
	buffer = malloc(sizeof(n) + 1);
	if (buffer != NULL)
		size = sprintf(buffer, "%x", n);
	k = (write(1, buffer, size));
	free(buffer);
	return(k);
}

/**
 * print_hexa_cap - prints an integer in hexadecimal form to stdout
 * @args: variable to print
 *
 * Description: the integer is first converted to a string then printed
 * Return: number of characters printed
 */
int print_hexa_cap(va_list args)
{
	int size, n, k;
	char *buffer;

	n = va_arg(args, int);
	buffer = malloc(sizeof(n) + 1);
	if (buffer != NULL)
		size = sprintf(buffer, "%X", n);
	k = (write(1, buffer, size));
	free(buffer);
	return(k);
}
