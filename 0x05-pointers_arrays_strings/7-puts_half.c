#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string parameter
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0, j = 0;

	while (str[i] != '\0')
		i++;

	while (j++ < (i / 2))
		_putchar(str[j]);

	_putchar('\n');
}
