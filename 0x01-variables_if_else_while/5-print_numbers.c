#include <stdio.h>
/**
 * main - outputs numbers
 *
 * Returns: 0 after successful completion
 */
int main(void)
{
	int val = 0;
	while (val < 10)
		printf("%d", val++);
	putchar('\n');
	return (0);
}	
