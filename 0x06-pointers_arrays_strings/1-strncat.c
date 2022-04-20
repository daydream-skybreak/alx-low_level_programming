#include "main.h"
/**
 * _strncat - conats strings
 * @dest: pointer 1
 * @src: pointer 2
 * @n: parameter
 * Return: character
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;

	while (j <= n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
