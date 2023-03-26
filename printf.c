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
		else
		{
			if (format[i + 1] == 'c')
			{
				char c = va_arg(args, int);

				_putchar(c);

				length++;
				i++;
			}
			if (format[i + 1] == 's')
			{
				char *str = va_arg(args, char*);

				write(1, str, _strlen(str));

				length += _strlen(str);
				i++;
			}
		}

	}
	va_end(args);
	return (length);
}
