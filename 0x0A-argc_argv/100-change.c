#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry Point
 * @argc: parameter
 * @argv: parameter
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int cents;
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents > 0)
		while (cents != 0)
		{
			if (cents >= 25)
			{
				coins++;
				cents -= 25;
			}
			else if (cents >= 10)
			{
				coins++;
				cents -= 10;
			}
			else if (cents >= 5)
			{
				coins++;
				cents -= 5;
			}
			else if (cents >= 2)
			{
				coins++;
				cents -= 2;
			}
			else
			{
				coins++;
				cents -= 1;
			}
		}
	printf("%d\n", coins);
	return (0);
}
