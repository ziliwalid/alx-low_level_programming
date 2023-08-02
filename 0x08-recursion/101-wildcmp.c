#include "main.h"

/**
 * StringChecker - checks if a couple of strs are identical
 * @st1: string
 * @st2: string
 * Return: int
 */
int StringChecker(char *st1, char *st2)
{
	if (st1[0] == '\0' && st2[0] == '\0')
		return (1);
	if (st1[0] == st2[0])
		return (StringChecker(st1 + 1, st2 + 1));
	if (st1[0] == '\0' && st2[0] == '*')
		return (StringChecker(st1, st2 + 1));
	if (st2[0] == '*')
		return (StringChecker(st1 + 1, st2) || StringChecker(st1, st2 + 1));
	return (0);
}

/**
 * wildcmp - check if strings could be considered identical
 * @s1: string
 * @s2: string
 * Return: 1 if considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	return (StringChecker(s1, s2));
}

