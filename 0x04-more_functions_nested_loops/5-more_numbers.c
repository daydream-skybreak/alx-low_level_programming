#include "main.h"
/**
 * more_numbers - outputs 0-14 10 times
 * 
 * Return: nothing
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
	}
}
