#include "main.h"
/**
 * more_numbers - prints more numbers
 *
 * Return: always 0
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (i >= 10)
				_putchar(i / 10 + '0');
			_putchar(i % 10 +'0');
		}
		_putchar('\n');
	}
}
		
