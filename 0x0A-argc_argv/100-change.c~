#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - returns smallest number of coins to a given number
 * @argc: integer value passed into the function
 * @argv: tells how many args are passed into the main function
 * Return: integer
 */
int main(int argc, char const *argv[])
{
	int i, j, coin, m, n;

	int arr[] = {25, 10, 5, 2, 1};

	m = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("%d\n", m);
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		coin = atoi(argv[1]);

		for (j = i; j < 5 - i; j++)
		{
			if (coin >= arr[j])
			{
				coin -= arr[j];

				m++;

				if (coin == 0)
				{
					break;
				}
				if (arr[j] <= coin)
				{
					j--;
					continue;
				}
			}
		}
		if (i == 0)
		{
			n = m;
		}

		if (n > m)
		{
			n = m;
		}

		if (coin == 0)
		{
			break;
		}
	}
	printf("%d\n", n);
	return (0);
}
