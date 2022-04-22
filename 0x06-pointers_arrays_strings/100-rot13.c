#include "main.h"
/**
 * rot13 - ciphering method
 * @string: string pointer
 * Return: string
 */
char *rot13(char *string)
{
	int x, y;

	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghjklmnopuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopuvwxyzabcdefghjklm";

	for (x = 0; string[x] != '\0'; x++)
	{
		for (y = 0; input[y] != '\0'; y++)
		{
		if (string[x] == input[y])
		{
			string[x] = output[y];
			break;
		}
		}
	}
	return (string);
}

