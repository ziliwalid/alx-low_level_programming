#include "main.h"
/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer (start of matrix)
 * @size: width of matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int x;
	int l = 0;
	int z = 0;

	for (i = 0; i < size; i++)
	{
		x = (i * size) + i;
		l += *(a + x);
	}
	for (j = 0; j < size; j++)
	{
		x = (j * size) + (size - 1 - j);
		z += *(a + x);
	}
	printf("%i, %i\n", l, z);
}
