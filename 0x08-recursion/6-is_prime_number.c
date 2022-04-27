#include "main.h"
/**
 * eval - recursion loop
 * @num: number
 * @iter: number to iterate
 *
 * Return: 1 or 0
 */
int eval(int num, int iter)
{
	if (iter == n - 1)
	{
		return (1);
	}
	else if (n % iter == 0)
	{
		return (0);
	}
	if (n % iter != 0)
	{
		return (eval(n, iter + 1));
	}
	return (0);
}
/**
 * is_prime_number - evaluating  function
 * @num: number to be evalutaed
 * Return: 1 if prime 0 if not
 */
int is_prime_number(int num)
{
	int i = 2;

	if (num < 2)
	{
		return (0);
	}
	if (num == 2)
	{
		return (1);
	}
	return (eval(num, i));
}
