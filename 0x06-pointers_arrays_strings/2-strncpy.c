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
	int i;
	i = 0;
	
	while (i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}