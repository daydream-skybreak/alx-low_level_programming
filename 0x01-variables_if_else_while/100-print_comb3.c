#include <stdio.h>
/**
 * main - outputs lowercase of alphabet entered
 *
 * Return: 0 after successful execution
 */
int main(void)
{
int val = 48, i=1;

while (i < 10)
{
int val1 = 48+i;
while(val1<58)
{
	putchar(val);
	putchar(val1++);
	if (val == 56 && val1 == 57)
		break;
	putchar(',');
	putchar(' ');
}
if (val == 56 && val1 == 57)
break;
val++;

}
putchar('\n');
return (0);
}

