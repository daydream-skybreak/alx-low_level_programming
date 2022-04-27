#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals in thematrix
 * @a: pointer to matrix
 * @size: size of matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, b = 0;

	while (b < size)
	{
		sum2 += a[(size - 1) * (b + 1)];

		sum1 += a[(size + 1) * b];

		b++;
	}

	printf("%d, %d\n", sum1, sum2);
}
