#include <stdio.h>
/**
 * main - outputs lowercase of alphabet entered
 *
 * Return: 0 after successful execution
 */
int main(void)
{
char val = 'a';
while (val < 123)
{
if (val == 'e' || val == 'q')
{
val++;
continue;
}
putchar(val++);
}
putchar('\n');
return (0);
}
