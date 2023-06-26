#include "main.h"

/**
 *print_rev - prints string reverse
 *@s: char type
 *Return: string reverse
 */

void print_rev(char *s)
{
	int leng = 0;

		while (*s != '\0')
		{
			leng++;
			s++;
		}
		for (int i = leng - 1; i >= 0; i--)
		{
		putchar(*(s + i));
		}
		putchar('\n');
}
