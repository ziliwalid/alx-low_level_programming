#include "variadic_functions.h"
/**
 * print_all - Prints anything
 * @format: args
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i;
	char *str;
	va_list vaLI;

	va_start(vaLI, format);
	if (format != NULL)
	{
		while (format[i] != '\0')
		{
			str = va_arg(vaLI, char*);

			if (str == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", str);
			}

			if ((i != n - 1) && (separator != NULL))
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(vaLI);
}
