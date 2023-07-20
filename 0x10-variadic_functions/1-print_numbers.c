#include "variadic_functions.h"
#include <stdio.h>
/**
* print_numbers - function that prints numbers
* @n: number of arguments
* @separator: separator between numbers
* Return: Always 0
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;

va_start(ap, n);
if (separator != NULL)
{
for (i = 0; i < n; i++)
{
printf("%d", va_arg(ap, int));

if (i != (n - 1))
{
printf("%s", separator);
}
}
va_end(ap);
printf("\n");
}

}
