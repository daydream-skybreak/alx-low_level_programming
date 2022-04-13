#include <stdio.h>
/**
 * main - start execution
 * @void: no parameter
 *
 * Return: 0 after compeltion
 */
int main(void)
{
	long int fst = 0, snd = 1;
	long int sum = 0, total = 0;

	while (sum < 4000000)
	{
		sum = fst + snd;
		fst = snd;
		snd = sum;
		if (sum % 2 == 0)
		{
			total = total + sum;
		}
	}
	printf("%ld\n", total);
	return (0);
}
