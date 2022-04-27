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
	if (iter == num - 1)
	{
		return (1);
	}
	else if (num % iter == 0)
	{
		return (0);
	}
	if (num % iter != 0)
	{
		return (eval(num, iter + 1));
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
