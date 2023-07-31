#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: initial segment
 * @accept: bytes
 * Return: bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int z = 0;
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					z++;
			}
		}
		else
			return (z);
	}
		return (z);

}
