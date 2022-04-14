#include "main.h"

/**
 * print_lines - prints lines
 * @n: integer input
 *
 * Return: always 0
 */

void print_lines(int n)
{
	int i;
	
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
