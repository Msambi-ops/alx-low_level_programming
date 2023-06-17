#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	for (int i = 0; i <= 9; i++)
	{
		putchar(i + '0');
		if (i == 9)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);#include <stdio.h>

/**
 * main - main block
 * Description: Print all possible combinations fo single-digit numbers.
 * You can only use `putchar` to print to console
 *
 * Return: 0
 */

int main(void)
{
	int y;

	for (y = 48; y < 58; y++)
	{
		putchar(y);
		if (y < 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
}
