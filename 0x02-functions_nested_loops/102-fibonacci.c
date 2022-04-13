#include <stdio.h>
/**
 * main - starts execution
 * @void: no parameter
 *
 * Return: 0 after successful completion
 */
int main(void)
{
	long int i, fst = 0, snd = 1;

	long int sum = 0;

	for (i = 0; i < 50; i++)
	{
		sum = fst + snd;
		fst = snd;
		snd = sum;
		printf("%ld", sum);
		if (i < 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
