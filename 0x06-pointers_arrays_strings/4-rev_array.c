#include "main.h"
/**
 * reverse_array - reverses an array
 * @a:array
 * @n:int
 * Return:void nada
 */
void reverse_array(int *a, int n)
{
int i, tempI;

for (i = 0; (i < (n - 1) / 2); i++)
	{
	tempI = a[i];
	a[i] = a[n - 1 - i];
	a[n - 1 - i] = tempI;
	}
}
