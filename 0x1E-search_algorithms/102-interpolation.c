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
	size_t h, l, pos, i;

	if (array == NULL)
		return (-1);
	l = i = 0, h = size - 1;
	while (array[l] != array[h] && value >= array[l] && value <= array[h])
	{

		pos = l + (((value + array[l]) * (h - l)) /
			   (array[h] - array[l]));

		printf("os = %lu \n", pos);
		printf("value = %d\n h = %lu \n l = %lu \n arr[h] = %d \n arr[l] = %d\n", value, h, l, array[h], array[l]);
		if (value < array[pos])
		{
			printf("1st");
			h = pos - 1;
		}
		else if (value > array[pos])
		{
			printf("2nd");
			l = pos + 1;
		}
		else if (value == array[pos])
		{
			printf("yes");
			return (pos);
		}
		if (i == 2)
		{
			i++;
			printf("about to be broken\n");
			break;
		}
	}
	if (value == array[l])
		return (l);
	return (-1);
}
