#include "function_pointers.h"

/**
  * int_index - search an int
  * @array: pointer param
  * @size: size param
  * @cmp: pointer param
  * Return: int, no nada this time :(
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]) != 0)
				{
					return (i);
				}
			}
		}
	}

	return (-1);
}
