#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *get_conversion - matches a given conversion specifier to a printing function
 *@c: conversion specifier
 *
 *Return: pointer to appropriate printing function
 */
int (*get_conversion(const char *c))(va_list)
{
	printer ops[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_integer},
		{'i', print_integer}
	};
	unsigned int i = 0;
	size_t n = sizeof(ops) / sizeof(ops[0]);

	while (i < n)
	{
		if (*c == ops[i].c)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
