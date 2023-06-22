#include "main.h"

/**
 *print_square - prints a square
 *
 *@size: type
 *Return: a square & new line
 */

void print_square(int size)
{
	if (size <= 0)
	{
		putchar('\n');
		return;
	}
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
