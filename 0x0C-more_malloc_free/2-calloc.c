#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory to an array
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(nmemb * size);

	if (mem == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;

	return (mem);
}
