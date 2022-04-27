#include "main.h"
/**
 * factorial - reutrns factorial of a given number
 * @n: number to be recured
 * Return: integer
 */
int factorial(int n)
{
	if (n == 1 || n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
