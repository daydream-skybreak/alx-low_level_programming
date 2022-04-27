#include "main.h"
/**
 * _eval - evaluates for square roots
 * @i: root integer
 * @n: integer input
 * Return: square root
 */
int _eval(int i, int n)
{
	if (n == 1 || n == 0)
		return (n);
	else if (i * i == n)
		return (i);
	else if (i * i < n)
		return (_eval(i + 1, n));
	return (-1);
}
/**
 * _sqrt_recursion - evaluates for square roots
 * @n: integer input
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (i < 0 || n - i < 0)
		return (-1);
	else
		return (_eval(i, n));
}
