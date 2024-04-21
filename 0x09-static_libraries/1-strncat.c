#include "main.h"
/**
 * _strncat - a function that concatenates two strings.
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: most number of bytes from @src
 *
 * Return: @dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	if (n >= i)
	{
		for (j = 0; src[i] != '\0'; j++)
		{
			dest[i++] = src[j];
		}

		dest[i] = '\0';
	}

	else
	{
		for (j = 0; j < n; j++)
			dest[i++] = src[j];

		dest[i] = '\0';
	}
	return (dest);
}
