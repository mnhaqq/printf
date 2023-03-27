#include "main.h"
/**
 * _printf - a function that produces output according to a format
 * @format: character string that directs the format of the output
 * Return: the number of characters printed, excluding the null byte
 */
int _printf(const char *format, ...)
{	va_list args;
	char *s;
	char *str = malloc(20 * sizeof(char));	
	int i = 0, count = 0, d;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (format[i] != '\0')
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
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(null)";
				count += _puts(s);
				i += 2;
				break;
			case 'd':
				d = va_arg(args, int);
				_sprintf(str, "%d", d);
				count += _puts(str);
				i += 2;
				break;
			case 'i':
				d = va_arg(args, int);
				_sprintf(str, "%d", d);
				count += _puts(str);
				i += 2;
				break;
			case '%': /* percent conversion specifier */
				count += _putchar('%');
				i += 2;
				break;
			case '\0': /* null byte check */
				return (-1);
			default: /* no conversion specifiers */
				count += _putchar(format[i]);
				i++;
				break;
			}
			continue;
		}
		count += _putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count); }
