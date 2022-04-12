#include "main.h"

/**
 * main - entry point
 * @void: no argument
 * Return:
 * 0
 */
int main(void)
{
	char adonay[] = "_putchar";

	int a;

	for (a = 0; a < 8; a++)
	{
		_putchar(adonay[a]);
	}
	_putchar('\n');
	return (0);
}
