#include "main.h"
/**
 * _strlen_recursion - returns string's length
 * @s: string pointer
 * Return: integer
 */
int _strlen_recursion(char *s)
{
	int leng = 0;

	if (*s != '\0')
	{
		leng += 1;

		_strlen_recursion(s + 1);
	}
	return (leng);
}
