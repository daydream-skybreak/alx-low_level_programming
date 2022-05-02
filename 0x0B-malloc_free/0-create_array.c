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

	str = malloc(sizeof(char) * size);
	i = 0;

	if (size == 0)
	{
		return ("failed to allocate memory\n");
	}

	while (i < (sizeof(char) * size))
	{
		str[i] = c;
		i++;
	}
	return (str);
}
