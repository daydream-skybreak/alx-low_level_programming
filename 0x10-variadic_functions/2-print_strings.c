#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @n: number of strings being printed
 * @separator: separator between strings
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *new;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		new = va_arg(list, char *);

		if (new)
		{
			printf("%s", new);
		}
		else
		{
			printf("nil");
		}

		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}
