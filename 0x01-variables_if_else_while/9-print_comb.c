#include <stdio.h>
/**
 * main - outputs lowercase of alphabet entered
 *
 * Return: 0 after successful execution
 */
int main(void)
{
int val = 48;
while (val < 58)
{
	putchar(val++);
	if (val == 58)
		break;
	putchar(',');
	putchar(' ');
}
putchar('\n');
return (0);
}
