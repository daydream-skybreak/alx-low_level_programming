#include "main.h"
/**
 * leet - encodes a given string
 * @string: string pointer
 * Return: translated string
 */
char *leet(char *string)
{
	int a, b;

	char lower[] = "aeotl";
	char upper[] = "AEOTL";
	char num[] = "43071";

	for (a = 0; string[a] != '\0'; a++)
	{
		for (b = 0; lower[b] != '\0' && upper[b] != '\0'; b++)
		{
			if (lower[b] == string[a] || upper[b] == string[a])
			{
				string[a] = num[b];
				break;
			}
		}
	}
	return (string);
}
