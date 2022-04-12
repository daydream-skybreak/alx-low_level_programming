#include "main.h"
/**
 * print_alphabet - lists alll the small alphabet letters
 * @void - no parameter
 *
 * Return: 0 after successsful  compilation
 */
void print_alphabet(void)
{
	int no = 97;

	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(no + i);
	}
	_putchar('\n');
}
