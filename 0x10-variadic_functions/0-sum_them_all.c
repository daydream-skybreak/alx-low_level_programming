#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums the passed numbers to it
 * @n: number of elements
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int i, sum = 0;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		sum += va_args(list, int);
	}

	va_end(list);

	return (sum);
}
