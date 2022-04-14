#include "main.h"
/**
 * print_diagonal - kadf
 * @n: integer nput
 * Return: 0
 */
void print_diagonal(int n)
{
	int i, j;
	if (n > 0)
	{
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		for (j = 0; j <= i; j++)
		{
			-putchar('\\');
		}
		_putchar('\n');
	}
	}
}
