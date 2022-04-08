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
if (val == 69 || val == 81)
{
val++;
continue;
}
putchar(val++);
}
putchar('\n');
return (0);
}
