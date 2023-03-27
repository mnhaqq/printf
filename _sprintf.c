#include "main.h"

/**
 * _sprintf - a custom implementation of sprintf
 * @str: pointer to the destination buffer
 * @format: pointer to a format string
 *
 * Return: the number of characters written to the buffer (excluding null byte)
 */
int _sprintf(char *str, const char *format, ...)
{
	va_list args;
	int i = 0, written = 0;

	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;

			if (format[i] == 'd')
			{
				int num = va_arg(args, int);

				written += sprintf(str + written, "%d", num);
			}
			else if (format[i] == 's')
			{
				char *s = va_arg(args, char *);

				written += sprintf(str + written, "%s", s);
			}
			else
			{
				return (-1);
			}
		}
		else
		{
			str[written++] = format[i];
		}

		i++;
	}

	str[written] = '\0';

	va_end(args);

	return (written);
}

