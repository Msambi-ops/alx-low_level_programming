#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s:string parameter
 *
 * Return:length of the string
 */
int _strlen_recursion(char *s)
{
	int lngth = 0;

	if (*s)
	{
		lngth++;
		lngth += _strlen_recursion(s + 1);
	}

	return (lngth);
}
