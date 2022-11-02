#include "search_algos.h"
#include <math.h>
/**
 * jump_search - searches for a value in a sorted array using jump search algo
 * @array: array being searched
 * @size:size of the array
 * @value:value being searched for
 * Return: the index of the value in the array
 */
int jump_search(int *array, size_t size, int value)
{
	size_t first, last;

	first = 0, last = sqrt(size);
	printf("Value checked array[%lu] = [%d]\n", first, array[first]);
	while (array[last] < value)
	{
		if (last >= size)
			break;
		first = last;
		last += sqrt(size);
		printf("Value checked array[%lu] = [%d]\n", first, array[first]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", first, last);

	while (first <= last && first < size)
	{
		printf("Value checked array[%lu] = [%d]\n", first, array[first]);
		if (array[first] == value)
			return (first);
		first++;
	}
	return (-1);
}
