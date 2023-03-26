#include "main.h"

/**
 *_printf - function to print a string unto terminal
 *@format: string to be printed
 *Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int i, length;
	char c;
	char *s;
	va_list args;

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] == 'c')
		{
			c = va_arg(args, int);
			_putchar(c);
			length++;
			i++;
			continue;
		}
		if (format[i] == '%' && format[i + 1] == 's')
		{
			s = va_arg(args, char *);
			write(1, s, _strlen(s));
			length += _strlen(s) - 1;
			i++;
			continue;
		}
		c = format[i];
		_putchar(c);
		length++;
	}
	length -= 1;
	va_end(args);
	return (length);
}
