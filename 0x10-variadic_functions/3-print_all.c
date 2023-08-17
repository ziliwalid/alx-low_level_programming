#include "variadic_functions.h"

/**
 * print_all - prints args
 * @format: format param
 * Return: void, NADAAAAAAAAAA
 */

void print_all(const char * const format, ...)
{
	char *str;
	int status;
	va_list vaLI;
	int i;

	va_start(vaLI, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(vaLI, int));
				status = 0;
				break;
			case 'i':
				printf("%i", va_arg(vaLI, int));
				status = 0;
				break;
			case 'f':
				printf("%f", va_arg(vaLI, double));
				status = 0;
				break;
			case 's':
				str = va_arg(vaLI, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				status = 0;
				break;
			default:
				status = 1;
				break;
		}
		if (format[i + 1] != '\0' && flag == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(vaLI);
}
