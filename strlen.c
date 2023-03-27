#include <stdio.h>

/**
 *_strlen - calculate length of string
 *@s: string
 *Return: length of string
 */

int _strlen(char *s)
{
	int i;

	if (s != NULL)
	{

		for (i = 0; s[i] != '\0'; i++)
		{
		}
		return (i);
	}

	return (0);
}
