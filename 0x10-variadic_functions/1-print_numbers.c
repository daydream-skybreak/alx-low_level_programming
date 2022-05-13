#include "variadic_functions.h"
/**
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	if (n == 0)
	{
		return (NULL);
	}

	va_start(list, n);
	
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (i != n - 1)
		{
			printf("%s", separator);
		}
	}
}	
