#include "main.h"
/**
 * _strcat - concatinates two strings together
 * @dest: pointer to destination
 * @src: pointer to a source
 *
 * Return: character
 */
char *_strcat(char *dest, char *src)
{
	int a, i = 0, j = 0, b = 0, n;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
		j++;
	n = i + j + 1;

	char new[n];

	for (a = 0; a < i; a++)
	{
		new[a] = dest[a];
	}

	for (a = i; a < n - 1; a++)
	{
		new[a] = src[b++];
	}
	new[n - 1] = '\0';
	return (new);
}
