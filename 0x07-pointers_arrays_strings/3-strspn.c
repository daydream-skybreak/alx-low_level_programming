#include "main.h"
/**
 * _strspn - checks for the number of bytes
 * @s: string to be searched
 * @accept: string containing items to be matched
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, t = 0;

	while (accept[a])
	{
		b = 0;

		while (s[b] != 32)
		{
			if (s[b] == accept[a])
			{
				t++;
			}
			b++;
		}
		a++;
	}
	return (t);
}
