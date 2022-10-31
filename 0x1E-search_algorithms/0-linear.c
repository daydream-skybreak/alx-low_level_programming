#include "search_algos.h"
/**
 * linear_search - searchs for an element in an array in a linear manner
 * @array: an array to be searched
 * @size: size of the array
 * @value: value that is being searched
 * Return: index of the first value matching the value being searched or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
