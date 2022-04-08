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
	putchar(val++);
val = 65;
while (val <= 90)
	putchar(val++);
putchar('\n');
return (0);
}

