#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns two dimentional array of integer
 * @width: outer array size
 * @height: inner array size
 * 
 * Return: the 2d array created
 */
int **alloc_grid(int width, int height)
{
	int *arr;
	int i, j;
	arr = NULL;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int *)malloc(height * width * sizeof(int));

	for (j = 0; j < width * height; j++)
	{
		if (j % height == 0 && j != 0)
		{
			printf("\n");
		}
		arr[j] = 0;
	}

	return (arr);
}
