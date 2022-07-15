#include "main.h"
/**
 * _abs - computes absolute value
 * @n: integer parameter
 *
 * Return: returns hte absolute value of the number
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
