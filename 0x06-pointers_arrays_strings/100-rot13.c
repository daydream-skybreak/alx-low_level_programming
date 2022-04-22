#include "main.h"
/**
 * rot13 - ciphering method
 * @string: string pointer
 * Return: string
 */
char *rot13(char *string)
{
	int x;

	for (x = 0; string[x] != '\0'; x++)
	{
		if ((string[x] < 78 && string[x] > 64) || (string[x] > 96 && string[x] < 110))
		{
			string[x] += 13;
		}
		else if ((string[x] < 91 && string[x] > 77) || (string[x] > 109 && string[x] < 123))
		{
			string[x] -= 13;
		}
	}
	return (string);
}
