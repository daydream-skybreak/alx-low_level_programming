#include "main.h"
/**
 * cap_string - capitalizes the word of thea string
 * @s: string
 * Return: s
 */
char *cap_string(char *s)
{
	int x, y;
	int trier;
	char nots[] = ",;.!?(){}\'\n\'\'\t\'\" ";

	for (x = 0,trier = 0; s[x] != '\0'; x++)
	{
		if (s[0] > 96 && s[0] < 123)
		{
			trier = 1;
		}
		for (y = 0; nots[y] != '\0'; y++)
		{
			if (nots[y] == s[x])
			{
				trier = 1;
			}
		}
		if (trier)
		{
			if (s[x] > 96 && s[x] < 123)
			{
				s[x] -= 32;
				trier = 0;
			}
			else if (s[x] < 123 && s[x] > 96)
			{
				trier = 0;
			}
			else if (s[x] > 47 && s[x] < 58)
			{
				trier = 0;
			}
		}
	}
	return (s);
}
