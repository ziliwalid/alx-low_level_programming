#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	char secret_code[84];
	int i = 0, total = 0, half_diff_1, half_diff_2;

	srand(time(0));

	while (total < 2772)
	{
		secret_code[i] = 33 + rand() % 94;
		total += secret_code[i++];
	}

	secret_code[i] = '\0';

	if (total != 2772)
	{
		half_diff_1 = (total - 2772) / 2;
		half_diff_2 = (total - 2772) / 2;
		if ((total - 2772) % 2 != 0)
			half_diff_1++;

		for (i = 0; secret_code[i]; i++)
		{
			if (secret_code[i] >= (33 + half_diff_1))
			{
				secret_code[i] -= half_diff_1;
				break;
			}
		}
		for (i = 0; secret_code[i]; i++)
		{
			if (secret_code[i] >= (33 + half_diff_2))
			{
				secret_code[i] -= half_diff_2;
				break;
			}
		}
	}

	printf("%s", secret_code);

	return (0);
}

