#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds items
 * @a: int 1
 * @b: int 2
 * Return: added result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts items
 * @a: int 1
 * @b: int 2
 * Return: subtracted result
 */
int op_sub(int a, int b)
{
        return (a - b);
}

/**
 * op_add - multiplies items
 * @a: int 1
 * @b: int 2
 * Return: product
 */
int op_mul(int a, int b)
{
        return (a * b);
}
/**
 * op_add - division operator
 * @a: int 1
 * @b: int 2
 * Return: quotient
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
        return (a / b);
}
/**
 * op_mod - calculates the remainder
 * @a: int 1
 * @b: int 2
 * Return: remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
        {
                printf("Error\n");
                exit(100);
        }
        return (a % b);
}
