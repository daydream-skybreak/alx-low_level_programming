#include "main.h"
/**
 * times_table - displays the 9th time table
 * @void: no parameter
 *
 * Return: nothing to return
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int b = i * j;
			_putchar(b + '0');
		}
		_putchar(35);
		_putchar('\n');
	}
}

