#include "main.h"

/**
 * _islower - Returns 1 if lowercase letter 
 *
 *@c: letter that's char type
 * Return: 1 if lowercase and 0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
