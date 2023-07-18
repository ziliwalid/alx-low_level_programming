#include "main.h"

/**
 * pr_Alphabet - prints the entire alphabet
 */
void pr_Alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
