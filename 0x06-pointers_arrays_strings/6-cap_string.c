#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 * @s: string
 * Return: addr
 */
char *cap_string(char *s)
{
	int i, is_word_start = 1;

	for (i = 0; s[i]; i++)
	{
		if (isalpha(s[i]))
		{
			if (is_word_start)
				s[i] -= 'a' - 'A';
			is_word_start = 0;
		}
		else
			is_word_start = 1;
	}

	return (s);
}

