#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals in thematrix
 * @a: pointer to matrix
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, c = 0, b = 0;

	while (b < size)
	{
		while (c < size)
		{
			sum1 += a[b][c];
			c++;
			break;
		}
		b++;
	}
	
	b = 0, c = size - 1;

	while (b < size)
	{
		while (c >= 0)
		{
			sum2 += a[b][c];
			c--;
			break;
		}
		b++;
	}
	printf("%d, %d", sum1, sum2);
}
