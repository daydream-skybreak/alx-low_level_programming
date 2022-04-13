#include <stdio.h>
/**
 * main - start execution
 * @void: no parameter
 *
 * Return: 0 after successful completion
 */
int main(void)
{
	int num, sum = 0;

	for (num = 1; num < 1024; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			sum = sum + num;
		}
	}
	printf("%d\n", sum);
	return (0);
}
