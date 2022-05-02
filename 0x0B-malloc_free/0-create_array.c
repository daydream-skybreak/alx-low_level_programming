#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates a string of a specific size using malloc
 * @size: the size of the array
 * @c: constant character to initialize the array with
 * Return: pointer to the array or null
 */
char *create_array(unsigned int size, char c)
{
	char *str = NULL;
	unsigned long int i;

	i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	str = (int *)malloc(size * sizeof(char));
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
