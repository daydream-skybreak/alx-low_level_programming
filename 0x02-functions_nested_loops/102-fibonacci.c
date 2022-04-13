#include <stdio.h>
/**
 * main - starts execution
 * @void: no parameter
 *
 * Return: 0 after successful completion
 */
int main(void)
{
	int i, fst = 0, snd = 1;
	
	int temp, sum = 0;

	for (i = 0; i< 50; i++)
	{
		sum = fst + snd;
		fst = snd;
		snd = sum;
		printf("%d, ", sum);
	}
	printf("\n");
}
