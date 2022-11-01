#include "search_algos.h"
/**
 * print - prints an array
 * @array: array to be searched
 * @l: left of the array
 * @r: right end of the array
 * Return: nothing
 */
void print(int *array, size_t l, size_t r)
{
	for (; l < r + 1; l++)
	{
		if (l == r)
			printf("%d\n", array[l]);
		else
			printf("%d, ", array[l]);
	}
}
/**
 * binary_search - searches for an item using binary search algorithm
 * @array: array to be searched
 * @size: size of the array
 * @value: value being searched for
 * Return: the index where the value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, middle;

	if (array == NULL)
		return (-1);

	left = 0, right = size - 1;
	while (left <= right)
	{
		printf("Searching in array: ");
		print(array, left, right);
		middle = (left + right) / 2;

		if (array[middle] > value)
			right = middle - 1;
		else if (array[middle] < value)
			left = middle + 1;
		else
			return (middle);
	}
	return (-1);
}
