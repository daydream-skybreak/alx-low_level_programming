#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatinates string 1 to string 2 up until nth value
 * @s1: parent string
 * @s2: child string
 * @n: number of concatinated characters
 * Return: address of newly allocated character
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *new;
	new = malloc((n + sizeof *s1) * sizeof *new);

	if (new == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		new[i] = s[i];
	}
	if (n >= sizeof(s2))
	{
		for (j = 0; j < sizeof(s2)- 1; j++)
		{
			new[i] = s2[j];
			i++;
		}
		new[i] = '\0';
		return (new);
	}
	for (j = 0; j < n; j++)
	{
		new[i] = s2[j];
		i++;
	}

	s1[i] = '\0';
	return (new);
}
