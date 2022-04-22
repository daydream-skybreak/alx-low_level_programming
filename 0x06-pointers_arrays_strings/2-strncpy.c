#include "main.h"
/**
 * _strncpy - copies string to a specified number
 * @dest: destination string
 * @src: source string
 * @n: number of string
 *
 * Return: character
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j = 0;
	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (n > i)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
