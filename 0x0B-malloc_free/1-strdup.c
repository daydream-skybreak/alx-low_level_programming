#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - string duplicate
 * @str: string to be copied
 * Return: pointer to the duplicate file
 */
char *_strdup(char *str)
{
	int i, j, k;
	char *newStr = NULL;

	i = 0;
	k = 0;

	if (str == NULL)
		return (NULL);
	while (str[k] != '\0')
	{
	i++;
	k++;
	}

	newStr = malloc(sizeof(char) * (i + 1));

	for (j = 0; j <= i; j++)
		newStr[j] = str[j];

	return (newStr);
}
