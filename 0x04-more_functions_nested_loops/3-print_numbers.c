#include "main.h"
/**
 * print_numbers - prints numbers 0 to 9
 * @void: no arguments required
 *
 * Return: 0
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
