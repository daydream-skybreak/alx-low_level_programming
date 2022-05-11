#include "function_pointers.h"
/**
 * array_iterator - iterates through an array and executes function action
 * @array: array passed to the function
 * @size: size of the function
 * @action: pointer ot hte fucntion we need to use
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size > 0 && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
