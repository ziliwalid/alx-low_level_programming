#include "main.h"

/**
 * SqrtChecker - checks for square root
 * @x: int
 * @y: int
 * Return: int
 */
int SqrtChecker(int x, int y)
{
	if (x * x == y)
		return (x);
	if (x * x > y)
		return (-1);
	return (SqrtChecker(x + 1, y));
}

/**
 * _sqrt_recursion - returns square root of a number
 * @n: int
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (SqrtChecker(1, n));
}
