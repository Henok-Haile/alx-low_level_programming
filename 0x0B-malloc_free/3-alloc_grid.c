#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - A function that returns to a 2 dimensional array of strings
 * Prototype: int **alloc_grid(int width, int height);
 * Each element of the grid should be initialized to 0
 * The function should return NULL on failure
 * If width or height is 0 or negative, return NULL
 *
 * @width: width of the grid
 * @height: height of the grid
 * Return: a pointer to a 2D array
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(sizeof(int *) * width);

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	
	for (i = 0; i < width; i++)
	{
		ptr[i] = malloc(sizeof(int) * height);
		if (ptr[i] == NULL)
		{
			return (NULL);
		}
	}
	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			ptr[i][j] = 0;
	return (ptr);
}
