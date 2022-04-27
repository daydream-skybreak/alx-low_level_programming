#include "main.h"
/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string being searched
 * @accept: byte searched for
 * Return: a pointer to the bytes in s
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;

		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;

				return (s);
			}
			b++;
		}
		a++;
	}
	return ('\0');
}
