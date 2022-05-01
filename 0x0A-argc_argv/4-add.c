#include <ctype.h>
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - main function
 * @argc: number of command lines
 * @argv: array of string of command lines
 * Return: 1
 */
int main(int argc, char const *argv[])
{
	int i, sum = 0, checker = 0;
	
	if (argc == 1)
	{
		printf("%d\n", sum);
		return (0);
	}

	for (i = 0; i < argc - 1; i++)
	{
		if (!(isdigit(argv[i + 1])))
		{
			checker++;
		}
	}
	if (checker == argc)
	{
		printf("%d\n", sum);
	}
	else if (checker < argc - 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 0; i < argc- 1; i++)
		{
			if (i == 0)
				continue;
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
return (0);
}
