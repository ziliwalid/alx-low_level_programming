#include "main.h"
/**
 * checkChar - Checks if a character is lowercase.
 * @c: The character we are checking
 *
 * Return: 1 if character is lowercase, 0 if not
 */
int checkChar(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
