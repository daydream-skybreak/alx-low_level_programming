#include "main.h"
/**
 * puts2 -prints every other character
 * @str: string parameter
 *
 * Return: void
 */
void puts(char *str)
{
	int i = 0, j = 0;

	while (str[i])
		i++;

	while (j < i - 1)
	{
		_putchar(str[j]);
		j += 2;
	}
	_putchar('\n');
}
