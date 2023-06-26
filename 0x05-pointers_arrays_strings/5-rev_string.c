#include "main.h"

/**
 *rev_string - reverses a string
 *@s: char parameter
 *Return: 0 if (successful)
 */

void rev_string(char *s)
{
	int len = 0;
	int i;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	char temp;

	for (i = 0; i < len / 2; i++)
	{
		temp = *(s - i - 1);
		*(s - i - 1) = *(s - len + i);
		*(s - len + i) = temp;
	}
}
