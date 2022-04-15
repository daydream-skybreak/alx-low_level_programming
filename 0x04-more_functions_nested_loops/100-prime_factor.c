#include <stdio.h>
/**
 * main - starts execution
 *
 * Return: always 0
 */
int main(void)
{
	unsigned long factor, i, prime, no;
	no = 612852475143;

	for (prime = 3; prime < no: prime += 2)
	{
		while (no % prime == 0)
		{
			no = no / prime;
			factor = prime;
		}
	}
	printf("%ld\n", factor);
	return (0);
}
