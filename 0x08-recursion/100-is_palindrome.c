#include "main.h"
/**
 * _strlen_recursion - length of a strinf
 * @s: string
 * Return: string
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
/**
 * PalChecker - checks if s is a pal
 * @s: string
 * @i: int
 * @j: int
 * Return: int
 */
int pal_PalChecker(char *s, int i, int j)
{
	if (s[i] == s[j])
		if (i > j / 2)
			return (1);
		else
			return (PalChecker(s, i + 1, j - 1));
	else
		return (0);
}
/**
 * is_palindrome - checks if s is ze palindrome
 * @s: base address for the str
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_palindrome(char *s)
{
	return (PalChecker(s, 0, _strlen_recursion(s) - 1));
}
