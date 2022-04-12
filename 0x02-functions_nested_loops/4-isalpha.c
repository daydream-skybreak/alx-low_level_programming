#include "main.h"
/**
 * _isalpha - start execution
 * @c: an int parameter
 *
 * Return: 1 or 0 after successful execution
 */
int _isalpha(int c)
{
	if (c <= 90)
	{
		if (c >= 65)
		{
			return (1);
		}
	}
	if (c >= 97)
	{
		if (c <= 122)
		{
			return (1);
		}
	}
	return (0);
}
