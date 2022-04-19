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
	int i = 0;
	start_s = s;
	end_s = s;
	while (s[i] != '\0')
		i++;

	while (i > 0)
		end_s++;

	while (i > 0)
	{
		c = *end_s;
		*end_s = *start_s;
		*start_s = c;
		start_s++;
		end_s--;
	}
}
