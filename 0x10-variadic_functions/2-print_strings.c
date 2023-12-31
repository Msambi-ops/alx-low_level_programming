#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_strings - function that prints strings
 *@separator: parameter
 *@n: int parameter
 *Return: Always 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *current_str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		current_str = va_arg(ap, char*);
		if (current_str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", current_str);
		}

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(ap);
}
