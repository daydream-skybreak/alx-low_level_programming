#include "main.h"
/**
 * puts2 -prints every other character
 * @str: string parameter
 *
 * Return: void
 */
void puts2(char *str)
{
	int j = 0;

	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j += 2;
	}
	_putchar('\n');
}
