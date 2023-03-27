#include "main.h"
/**
 * _printf - a function that produces output according to a format
 * @format: character string that directs the format of the output
 *
 * Return: the number of characters printed, excluding the null byte
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0;

	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c': /* character conversion specifier */
					count += _putchar(va_arg(args, int));
					i += 2;
					break;

				case 's': /* string conversion specifier */
					count += _puts(va_arg(args, char *));
					i += 2;
					break;

				case '%': /* percent conversion specifier */
					count += _putchar('%');
					i += 2;
					break;

				default: /* unknown conversion specifier */
					count += _putchar('%');
					count += _putchar(format[i + 1]);
					i += 2;
					break;
			}
		}
		else
		{
			count += _putchar(format[i]);
			i++;
		}
	}
	va_end(args);
	return (count);
}

