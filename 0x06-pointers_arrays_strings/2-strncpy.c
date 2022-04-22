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
	while (dest[j] != '\0')
	{
		j++;
	}
	
	while (i < n - 1 && i < j - 1)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
