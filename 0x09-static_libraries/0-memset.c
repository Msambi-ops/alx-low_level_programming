#include "main.h"
/**
 * _memset - fill block of memory with a specific value
 * @s: base adress
 * @b: value
 * @n: bytes
 * Return: returns 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;


	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
