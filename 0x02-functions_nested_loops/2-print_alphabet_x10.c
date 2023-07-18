#include "main.h"

/**
 * pr_Alphabetx10 -prints 10 times the alphabet.
 */
void pr_Alphabetx10(void)
{
	int i = 0;
	char l;

	while (i++ <= 9)
	{
		for (l = 'a'; l <= 'z'; l++)
			_putchar(l);
		_putchar('\n');
	}
}
