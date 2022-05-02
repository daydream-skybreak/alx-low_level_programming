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
	char *str;
	unsigned long int i;

	if (size == 0)
	{
		return (NULL);
	}

	str = (char *)malloc(int(size) * sizeof(char));

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}

	return (str);
}
