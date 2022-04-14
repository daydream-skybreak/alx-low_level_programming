#include "main.h"
/**
 * print_triangle - prints triangle
 * @size: integer input
 *
 * Return: always 0
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
	for (i = 0; i < size; i++)
	{
		for (j = size - 1; j > i; j--)
		{
			_putchar(' ');
		}
		for (j = 0; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	}
}
