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
	int **arr;
	int i, j;
	arr = NULL;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **)malloc(height * width * sizeof(int));

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			arr[i][j] = 0;

	return (arr);
}
