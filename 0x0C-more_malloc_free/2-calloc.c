#include "main.h"
#include <stdio.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	int cnt;
	cnt = 0;

	if (cnt == 0 || size == 0)
		return (NULL);

	mem = calloc(nmemb, size);

	if (mem == NULL)
		return (NULL);
	return (mem);
}
