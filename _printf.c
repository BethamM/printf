#include "main.h"
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stddef.h>
#include <stdio.h>
int _printf(const char *format, ...)
{
	unsigned int len, i;
	va_list args;
	const char *c;
	int characters;

	len = strlen(format);
	va_start(args, format);

	for (i = 0; i < len; i++)
	{
		c = format + i;
		if (*c == '%')
		{
 			if (get_conversion(c + 1) != NULL)
 			{
				characters = get_conversion(c + 1)(args);
				i++;
 			}
		}
		else
			characters = write(1, c, 1);

	}
	va_end(args);
	return (characters);
}
