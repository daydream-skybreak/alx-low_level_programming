#include "main.h"
/**
 * _islower - where execution starts
 * @c: an integer parameter
 *
 * Return: 1 or 0 if successful compilation
 */
int _islower(int c)
{
	if (c >= 97)
	{
		if (c <= 122)
		{
			return (1);
		}
	}
	return (0);
}
