#include "main.h"

/**
 * _printf - produces output according to a format.
 * @format: character string containing zero or more directives.
 *
 * Return: number of characters printed (excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i, length;
	char c, *s;

	va_start(args, format);
	for (i = 0, length = 0; format && format[i]; i++)
	{
		if (format[i] != '%')
		{
			putchar(format[i]);
			length++;
			continue;
		}

		switch (format[i + 1])
		{
			case 'c':
				c = va_arg(args, int);
				putchar(c);
				length++;
				break;

			case 's':
				s = va_arg(args, char *);
				if (!s)
					s = "(null)";
				while (*s)
				{
					putchar(*s++);
					length++;
				}
				break;

			case '%':
				putchar('%');
				length++;
				break;

			default:
				putchar('%');
				putchar(format[i + 1]);
				length += 2;
		}

		i++;
	}

	va_end(args);

	return (length);
}

