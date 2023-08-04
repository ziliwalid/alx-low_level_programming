#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry Point
 * @argc: parameter
 * @argv: parameter
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;
	int num;
	int sum = 0;
	char *flag;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; argv[i]; i++)
	{
		num = strtol(argv[i], &flag, 10);
		if (*flag)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += num;
		}
	}
	printf("%d\n", sum);

	return (0);
}
