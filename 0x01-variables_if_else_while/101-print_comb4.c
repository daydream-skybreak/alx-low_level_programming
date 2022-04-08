#include <stdio.h>
/**
 * main - outputs lowercase of alphabet entered
 *
 * Return: 0 after successful execution
 */
int main(void)
{
int val = 48, i = 1;

while (i < 10)
{
int val1 = 48 + i;

while (val1 < 58)
{
int val2 = val1 + 1;
	while (val2 < 58)
{
	putchar(val);
	putchar(val1);
	putchar(val2++);
	if (val == 55 && val1 == 56 && val2 == 58)
		break;
	putchar(',');
	putchar(' ');
}
val1++;
}
if (val == 55 && val1 == 56)
break;
val++;
i++;
}
putchar('\n');
return (0);
}
