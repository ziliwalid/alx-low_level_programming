#include "main.h"

/**
 * print_line - prints lines
 * @n: number of loop
 * Return: void
 */


void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
