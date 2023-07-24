#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 * Return: an int
 */
int _atoi(char *s)
{
	int c = 0;
	unsigned int z = 0;
	int min = 1;
	int b = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			min *= -1;
		}

		while (s[c] >= 48 && s[c] <= 57)
		{
			b = 1;
			z = (z * 10) + (s[c] - '0');
			c++;
		}

		if (b == 1)
		{
			break;
		}

		c++;
	}

	z *= min;
	return (z);
}
