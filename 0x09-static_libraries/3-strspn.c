#include "main.h"
/**
 * _strspn - Get the length of a prefix substring
 *
 * @s: The character to print
 *
 * @accept: Character
 *
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[i] != accept[j]; j++)
			if (accept[j] == '\0')
				return (i);
	}
	return (i);
}
