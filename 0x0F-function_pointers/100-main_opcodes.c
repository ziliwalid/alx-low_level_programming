#include <stdio.h>
#include <stdlib.h>
/**
 * PRopcodes - func
 * @a: param (addr)
 * @n: param (num to print)
 * Return: void, nada :)
 */
void PRopcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
}
/**
 * main - Entry Point
 * @argc: arg1
 * @argv: arg2
 * Return: O, no nada :(
 */
int main(int argc, char **argv)
{
	int num;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}
	PRopcodes((char *)&main, num);
	return (0);
}
