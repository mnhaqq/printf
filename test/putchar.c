#include <unistd.h>

/**
 *_putchar - function to print one character on the standard output
 *@c: character
 *Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
