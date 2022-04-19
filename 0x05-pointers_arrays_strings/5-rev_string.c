#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string parameter
 *
 * Return: void
 */
void rev_string(char *s)
{
	char *start_s, *end_s, c;
	int i, count;
	int length = 0;

	for (i = 0; s[i]; i++)
		length++;

	count = length;

	start_s = s;
	end_s = s;

	for (i = 0; i < count - 1; i++)
		end_s++;

	for (i = 0; i < count / 2; i++)
	{
		c = *end_s;
		*end_s = *start_s;
		*start_s = c;
		start_s++;
		end_s--;
	}
}
