#include "main.h"
/**
 * print_last_digit - start execution
 * @n: integer parameter
 *
 * Return: returns hte last digit of the passed argument
 */
int print_last_digit(int n)
{	int ln = n % 10;

	if (ln < 0)
		ln *= -1;
	_putchar(ln + '0');
	return (ln);
}
