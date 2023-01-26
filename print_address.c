#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>


/**
 * print_address - prints an addressto stdout
 * @args: variable to print
 *
 * Description: the address is first converted to a string then printed
 * Return: number of characters printed
 */
int print_address(va_list args)
{
	int size;
	char *buffer;

	void *n = va_arg(args, void *);

	buffer = malloc(sizeof(n) + 1);
	if (buffer != NULL)
		size = sprintf(buffer, "%p", n);
	return (write(1, buffer, size));

}
