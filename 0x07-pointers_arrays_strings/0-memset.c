#include "main.h"
/**
 * _memset - fills string with a character
 * @s: string pointer
 * @b: character to be filled with
 * @n: how much characters are to be used
 *
 * Return: string pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
