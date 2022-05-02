#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns the copy of the string str
 * @str: the string to be copied
 * Return: str
 */
char *_strdup(char *str)
{
	int num, i;
	char *cp;
	
	num = 0;
	i = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[num] != '\0')
	{
		num++;
		i++;
	}
	i = 0;

	cp = malloc(num + 1);

	while (i < num)
	{
		cp[i] = str[i];
		i++;
	}
	cp[i] = '\0';

	return (cp);
}
