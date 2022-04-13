#include <stdio.h>
/**
 * main - start execution
 * @void: no parameter
 *
 * Return: 0 after successful completion
 */
int main(void)
{
	int num;
	
	for (num = 1; num < 1024; num++);
	{
		if (num % 3 == 0 || num % 5 == 0)
			printf("%d \n", num);
	}
