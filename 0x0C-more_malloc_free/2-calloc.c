#include "main.h"
#include <stdio.h>
/**
 * *_calloc - allocates memory to an array
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(nmemb * size);

	if (mem == NULL)
		return (NULL);
	return (mem);
}
