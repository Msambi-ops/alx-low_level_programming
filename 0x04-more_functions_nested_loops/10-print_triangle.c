#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: traingle size
 */

void print_triangle(int size)
{
	int b, i, j;

	b = 0;

	i = size - 1;

	while (b < size)
	{
		i = size - 1 - b;
		j = b + 1;

		while (i > 0)
		{
			_putchar(' ');
			i--;
		}

		while (j > 0)
		{
			_putchar('#');
			j--;
		}
		_putchar('\n');
		b++;
	}

	if (size <= 0)
		_putchar('\n');
}
