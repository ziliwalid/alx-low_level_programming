#include <stdio.h>
/**
 * main - Prints first 50 Fibonacci numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int iteration;
	unsigned long current = 0, next = 1, sum;

	for (iteration = 0; iteration < 50; iteration++)
	{
		sum = current + next;
		printf("%lu", sum);
		current = next;
		next = sum;
		if (iteration == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}

