#include "variadic_functions.h"

/**
 * print_strings - func
 * @separator: param separtor
 * @n: num param
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	va_list vaLI;
	unsigned int i;

	va_start(vaLI, n);
	if (separator == NULL)
	{
		separator = "";
	}
	for (i = 0; i < n; i++)
	{
		str = va_arg(vaLI, char*);
		if (str == NULL)
		{
			str = "(nil)"; /*If one of the string is NULL*/
		}
		printf("%s", str);
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(vaLI);
}
