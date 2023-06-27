#include "main.h"

/**
 *puts_half - prints half of string
 *@str: char parameter
 *Return: 0 if successful
 */

void puts_half(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)

		;

		n++;
	for (n /= 2; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}

	_putchar('\n');

}
