#include <stdio.h>
/**
 * main - outputs lowercase of alphabet entered
 *
 * Return: 0 after successful execution
 */
int main(void)
{
int val = 97;
while (val < 123)
{
	putchar(val++);
	putchar(',');
	putchar(' ');
}
putchar('\n');
return (0);
}
