#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory with normal process termination upon faliure
 * @b: size to be allocated
 *
 * Return: NULL
 */
void *malloc_checked(unsigned int b)
{
	void *temp = malloc(b);

	if (temp == NULL)
		exit();

	return (temp);
}
