#include "main.h"

/**
 * _printf - prints out formatted strings to stdout
 * @format: first argument of the printf()
 * Return:  return the number of character printed
 */

int _printf(const char *format, ...)
{

	va_list args;
	int i, length;
	length = 0;
	va_start(args, format);

	for (i = 0; format[i] != '\0' ; i++)
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			length++;
		}
	}

	va_end(args);

	return (length);
}
