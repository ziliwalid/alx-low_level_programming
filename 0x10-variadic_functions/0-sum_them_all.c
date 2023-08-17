#include "variadic_functions.h"
/**
 * sum_them_all - sums nums
 * @n: num param
 * Return: Always 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	va_list vaLI;
	unsigned int i;
	
	va_start(vaLI, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(vaLI, int);
	}
	va_end(vaLI);
	return (sum);
}
