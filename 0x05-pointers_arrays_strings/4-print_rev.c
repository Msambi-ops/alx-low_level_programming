#include "main.h"

/**
 *print_rev - prints string reverse
 *@s: char type
 *Return: string reverse
 */

void print_rev(char *s)
{
	int len = 0;
	int i;

		while (*s != '\0')
		{
			len++;
			s++;
		}
		for (i = len - 1; i >= 0; i--)
		{
		_putchar(*(s + i));
		}

		_putchar('\n');
}
