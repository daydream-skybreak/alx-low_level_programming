#include "main.h"
/**
 * _strchr - locates a string
 * @s: string to be searched
 * @c: desired character
 * Return: location of the found character
 */
char *_strchr(char *s, char c)
{
	int i, j;

	i = 0;

	while (s[i])
	{
		i++;
	}

	for (j = 0; j <= i; j++)
	{
		if (s[j] == c)
		{
			s += j;
			return (s);
		}
	}
	return ('\0');
}
