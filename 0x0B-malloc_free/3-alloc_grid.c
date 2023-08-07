#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - does magic ( returns a pointer to 2D array of ints )
 * @width: width
 * @height: height
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **arr = NULL;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(arr[i]); /*deallocate memory*/
			}
			free(arr);  /*deallocate memory*/
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}

