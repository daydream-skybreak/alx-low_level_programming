#include "main.h"

/**
 * print_lines - prints lines
 * @n: integer input
 *
 * Return: always 0
 */

void print_lines(int n)
{
	int i = 95;
	
	int j;
	
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
