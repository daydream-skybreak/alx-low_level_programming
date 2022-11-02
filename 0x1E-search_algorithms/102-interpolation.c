#include "search_algos.h"
/**
 * interpolation_search - searches for a value using interpolation algorithm
 * @array: array being searched
 * @size: size of the array
 * @value: value being looked for
 * Return: index of the value if it exists else -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t h, l, pos;

	if (array == NULL)
		return (-1);
	l = 0, h = size - 1;
	while (size)
	{

		pos = l + (((value - array[l]) * (h - l)) /
			   (array[h] - array[l]));
		printf("Value checked array[%lu] ", pos);

		if (pos >= size)
		{
			printf("is out of range\n");
			break;
		}
		else
		{
			printf("= [%d]\n", array[pos]);
		}
		if (value < array[pos])
		{
			h = pos - 1;
		}
		else if (value > array[pos])
		{
			l = pos + 1;
		}
		else
		{
			return (pos);
		}

		if (h == l)
			break;
	}
	return (-1);
}
