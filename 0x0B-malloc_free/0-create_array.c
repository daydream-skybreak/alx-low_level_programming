#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * create_array - creates array of size with character c
 * @size: size of the array
 * @c: character to fill the array
 * Return: created array
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *s;

if (size == 0)
{
	return (NULL);
}

s = (char *)malloc(size * sizeof(char));

for (i = 0; i < size; i++)
{
	s[i] = c;
}

return (s);
}
