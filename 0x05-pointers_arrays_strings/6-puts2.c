#include "main.h"
/**
 * puts2 -prints every other character
 * @str: string parameter
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0, j = 0;

	while (str[j] != '\0')
		i++;

	while (j < i)
	{
		_putchar(str[j]);
		j += 2;
	}
	_putchar('\n');
}
