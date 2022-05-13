#include "variadic_functions.h"
#include <string.h>
/**
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *new;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		strcpy(new, va_arg(list, char));
		
		if (new == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%s", new);
		}

		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
