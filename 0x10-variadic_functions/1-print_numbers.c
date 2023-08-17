#include "variadic_functions.h"

/**
 * print_numbers - prints nums
 * @n: num param
 * @separator: separator
 * Return: void, NADA
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vaLI;
	unsigned int i;

	va_start(vaLI, n);
	if (separator == NULL)
	{
		separator = "";
	}
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(vaLI, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(vaLI);
}
