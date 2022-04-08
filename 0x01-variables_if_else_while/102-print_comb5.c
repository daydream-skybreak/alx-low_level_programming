#include <stdio.h>
/**
 * main - outputs lowercase of alphabet entered
 *
 * Return: 0 after successful execution
 */
int main(void)
{
	int i = 48;
	
	while (i < 58)
{
	int j = 48;
	while (j < 58)
{
	int k = 48;
	while (k < 57)
{
	int l = 48;
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
