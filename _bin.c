#include <stdio.h>
#include <math.h>

/**
 * convert - convert an integer to binary
 * @n: integer variable
 * return: the binary value
 */

int convert(int n)
{

	int bin = 0, rem, i = 1;

	while (n != 0)
	{
		rem = n % 2;
		n = n / 2;

		bin = bin + rem * i;
		i *= 10;
	}

	return (bin);
}
