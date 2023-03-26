#include "main.h"

/**
 *_printf - function to print a string unto terminal
 *@format: string to be printed
 *Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int i;
	char c;

	for (i = 0; format[i] != '\0'; i++)
	{
		c = format[i];
		_putchar(c);
	}
	return (i);
}
