#include "main.h"
/**
 * _isdigit - checks if the input is digit
 * @c: integer input
 *
 * Return: 0
 */
int _isdigit(int c)
{
	if (c < 58 && c > 47)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
