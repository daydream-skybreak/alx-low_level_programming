#include "main.h"
#include <stdio.h>
/**
 * times_table - displays the 9th time table
 * @n: 1st parameter
 *
 * Return: nothing to return
 */
void times_table(int n)
{
	int num, mult, prod;

	if (num <= 15 && num >= 0)
	{
		for (num = 0; num <= n ; num++)
		{
			_putchar('0');
			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');

				prod = num * mult;

				if (prod <= 99)
					_putchar(' ');
				if (prod <= 9)
					_putchar(' ');

				if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar(((prod / 10) % 10) + '0');
				}
				else if (prod <= 99 && prod >= 10)
				{
					_putchar((prod / 10) + '0');
				}
				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
