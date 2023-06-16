#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i = 'a';
	char i = 'A';

	for (; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (; i <= 'Z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
