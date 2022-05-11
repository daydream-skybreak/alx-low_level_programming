#include "function_pointers.h"
/**
 * print_name - prints name inlaccordance to the function
 * @name: name string
 * @f: pointer to the function being called
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
