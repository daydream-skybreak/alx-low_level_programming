#include "main.h"
/**
 * print_to_98 - prints to 98 from any number
 * @n: integer input
 * Return: returns nothing
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			_putchar(i + '0');
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	if (n > 98)
	{
		for (i = n; i>=98; i++)
		{
			_putchar(i + '0')
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
		
