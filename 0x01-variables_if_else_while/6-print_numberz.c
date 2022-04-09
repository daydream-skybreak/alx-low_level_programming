#include <stdio.h>
/**
 * main - prints 0-9 numbers using putchar
 *
 * Return: 0 after successful execution
 */
int main(void)
{
int val = 48;
while (val < 58)
	putchar(val++);
putchar('\n');
return (0);
}
