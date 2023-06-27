#include "main.h"

/**
 *puts2 - print one char
 *@str: char parameter
 * Return: 0 if successful
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}

	_putchar ('\n');
}
