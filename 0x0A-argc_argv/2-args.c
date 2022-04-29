#include "main.h"
#include <stdio.h>
/**
 * main - main function
 * @argc: number of command lines
 * @argv: array of string of command lines
 * Return: 1
 */
int main(int argc, char const *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
