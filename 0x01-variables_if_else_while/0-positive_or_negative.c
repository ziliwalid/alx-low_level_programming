#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Return: always 0 on success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d Positive", n);
	}
	if (n == 0)
	{
		printf("%d is Zero", n);
	}
	else
	{
		printf("%d is Negative", n);
	}
	return (0);
}
