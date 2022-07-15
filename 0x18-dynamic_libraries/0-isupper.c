#include "main.h"
/**
 * _isupper - checks uppercase
 * @c: integer input
 *
 * Return: 1 and 0
 */
int _isupper(int c)
{
	if (c < 91 && c > 64)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
