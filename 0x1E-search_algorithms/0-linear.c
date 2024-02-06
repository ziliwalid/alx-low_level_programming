#include "search_algos.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * linear_search - looks for a value in an array
 * @array: array param
 * @size: size param
 * @value: value param
 * Return: i of the value in questioln
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array || size == 0)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}

	return (-1);
}
