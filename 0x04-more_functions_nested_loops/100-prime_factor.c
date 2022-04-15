#include <stdio.h>
/**
 * main - starts execution
 *
 * Return: always 0
 */
int main(void)
{
	unsigned long factor, prime, no;

	no = 612852475143;

	for (prime = 3; prime <= no; prime += 2)
	{
		while (no % prime == 0)
		{
			factor = no;
			no = no / prime;
		}
	}
	printf("%lu\n", factor);
	return (0);
}
