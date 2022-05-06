#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory with normal process when process fails
 * @b: size to be allocated
 *
 * Return: NULL
 */
void *malloc_checked(unsigned int b)
{
	void *temp;

	temp = malloc(b);

	if (temp == NULL)
	{
		exit(98);
	}

	return (temp);
}
