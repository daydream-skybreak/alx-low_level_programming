#include <stdio.h>
/**
 * main - outputs lowercase of alphabet entered
 *
 * Return: 0 after successful execution
 */
int main(void)
{
	int i = 48, j = 48, k = 48, l = 48;
	
	while (i < 58)
{
	while (j < 58)
{
	while (k < 57)
{
	while (l < 58)
{
	putchar(i);
	putchar(j);
	putchar(' ');
	putchar(k);
	putchar(l);
	if (i == 57 && j == 57 && k == 56 && l == 57)
		break;
	putchar(',');
	putchar(' ');
	l++;
}
k++;
}
j++;
}
i++;
}
putchar('\n');
return (0);
}
