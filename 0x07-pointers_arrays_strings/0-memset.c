#include "main.h"
/**
 * _memset - fills the first n bytes of memory
 * @s: pointer
 * @b: constant filler
 * @n: number of bytes to be filled
 *
 * Return: the pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		str[i] = b;
	}

	return (s);
}
