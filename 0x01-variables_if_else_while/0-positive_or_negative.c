#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 on success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d Positive\n", n);
	}
	if (n == 0)
	{
		printf("%d is Zero\n", n);
	}
	else
	{
		printf("%d is Negative\n", n);
	}
	return (0);
}
