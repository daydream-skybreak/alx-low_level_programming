#include "main.h"
/**
 * reverse_array - reverse content of an array
 * @a: array of integers
 * @n: number of elements
 * Return: always 0
 */
void reverse_array(int *a, int n)
{
	int x, y;

	for (x = 0; x < (n / 2); x++)
	{
		y = a[x];
		a[x] = a[n - x - 1];
		a[n - x - 1] = y;
	}
}
