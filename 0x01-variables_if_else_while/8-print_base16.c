#include <stdio.h>
/**
 * main - outputs lowercase of alphabet entered
 *
 * Return: 0 after successful execution
 */
int main(void)
{
int val = 48;
while (val < 57)
	putchar(val++);
val = 97;
while (val <= 102)
	putchar(val++);
putchar('\n');
return (0);
}

