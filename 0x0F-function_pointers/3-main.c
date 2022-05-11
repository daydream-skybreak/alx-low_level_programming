#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - main function
 * @argc: number of arguments passed to the function
 * @argv: array of argument passed ot the function
 *
 * Return: integer
 */
int main(int argc, char const *argv)
{
	int result;
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[2]);
	b = atoi(argv[4]);

	result = (*get_op_func(argv[3]))(a, b);
	printf("%d\n", result);
	
	return (0);
}
