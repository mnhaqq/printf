#include <stdio.h>
#include <math.h>

int convert(int b)
{

	int bin = 0, rem, i = 1;

	while (n != 0)
	{
	
		rem = n % 2;
		n = n / 2;

		bin = bin + rem * i;
		i *= 10;
	}

	return(bin);
}
