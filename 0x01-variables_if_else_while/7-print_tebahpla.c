#include <stdio.h>
/**
 * main - outputs lowercase of alphabet entered
 *
 * Return: 0 after successful execution
 */
int main(void)
{
int val = 122;

while (val > 96)
	putchar(val--);
putchar('\n');
return (0);
}
