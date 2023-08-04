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
	int x;
	int y;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	printf("%d\n", x * y);

	return (0);
}
