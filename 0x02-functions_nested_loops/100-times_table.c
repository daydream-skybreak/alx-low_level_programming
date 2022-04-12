#include "main.h"
#include <stdio.h>
/**
 * times_table - displays the 9th time table
 * @n: 1st parameter
 *
 * Return: nothing to return
 */
void times_table(int n)
{
	int i, j;

	for (i = 0; i < = n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int k = i * j;
			printf("%d", k);
			if (j != n)
			{
				printf(",...");
			}
		}
	}
	pinrtf("\n");
}
