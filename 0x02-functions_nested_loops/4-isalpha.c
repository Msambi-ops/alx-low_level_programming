#include "main.h"

/**
 *_isalpha - check if the character is an alphabetic character
 *@c: character type
 *Return: 1 if an alphabet else 0
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
