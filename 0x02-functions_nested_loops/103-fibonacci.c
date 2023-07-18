#include <stdio.h>
/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *        terms not exceeding 4000000.
 * Return: Always 0.
 */
int main(void)
{
	unsigned long previous = 0, current = 1, sum = 0;
	float totalSum = 0;

	while (1)
	{
		sum = previous + current;
		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			totalSum += sum;
		previous = current;
		current = sum;
	}
	printf("%.0f\n", totalSum);
	return (0);
}

