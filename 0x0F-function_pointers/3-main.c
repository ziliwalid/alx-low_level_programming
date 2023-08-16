#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry Point
  * @argc: arg1
  * @argv: arg2
  * Return: int
  */
int main(int argc, char *argv[])
{
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operation = get_op_func(argv[2]);
	if (!operation)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", operation(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
