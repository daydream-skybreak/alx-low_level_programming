#include "main.h"
/**
 * print_most-numbers - prints except 2 and 4
 * @void: no arguments
 *
 * Return: nothing
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 || i != 4)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
