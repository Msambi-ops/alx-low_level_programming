#include "main.h"

/**
 * print_line - prints straignt line
 *
 *@n: int type param
 *
 *Return: straight line
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
