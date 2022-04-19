#include "main.h"
#include <stdio.h>
/**
 * print_array - prints elements of an array
 * @a: pointer to the first element of an array
 * @n: size of the array
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0, num;

	while (i < n)
	{
		num = *a++;
		printf("%d", num);
		if (i < n - 1)
			printf(", ");
		i++;
	}
	printf("\n");
}
