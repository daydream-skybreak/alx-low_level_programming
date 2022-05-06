#include "main.h"
/**
 * *array_range - returns numbers starting from min upto max inclusively
 * @min: minimum value
 * @max: maximum value
 *
 * Return: resulting array
 */
int *array_range(int min, int max)
{
	int *arr, cnt, t = min;
	
	if (min > max)
		return (0);

	arr = malloc((max - min + 1) * sizeof(*arr));

	if (!arr)
		return (0);

	for(cnt = 0; cnt < min - max + 1; cnt++)
		arr[cnt] = t++;

	return (arr);
}
