#include "main.h"
/**
 * _printf - produces output according to a format.
 * @format: character string containing zero or more directives.
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{	va_list args;
	int i, length;
	char c, *s;

	va_start(args, format);
	for (i = 0, length = 0; format && format[i]; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			length++;
			continue;
		}
		switch (format[i + 1])
		{
			case 'c':
				c = va_arg(args, int);
				_putchar(c);
				length++;
				break;
			case 's':
				s = va_arg(args, char *);
				while (*s)
				{
					_putchar(*s++);
					length++;
				}
				break;
			case '%':
				_putchar('%');
				length++;
				break;
			default:
				_putchar('%');
				_putchar(format[i + 1]);
				length += 2;
		}
		i++;
	}
	va_end(args);
	return (length);
}

