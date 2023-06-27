#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements
 *@a: int parameter
 *@n: int parameter
 *printf - Prints results
 *
 * Return: 0 if success
 */

void print_array(int *a, int n)
{
	int j;

	j = 0;

	for (n--; n >= 0; n--, j++)
	{
		printf("%d", a[j]);

		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
