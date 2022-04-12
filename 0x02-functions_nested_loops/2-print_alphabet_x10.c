#include "main.h"
/**
 * print_alphabet_x10 - start of execution
 * @void - no parameter
 *
 * Return: returns nothing
 */
void print_alphabet_x10(void)
{
	int i, j;

	int val = 97;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
		{
			_putchar(val + j);
		}
		_putchar('\n');
	}
}
