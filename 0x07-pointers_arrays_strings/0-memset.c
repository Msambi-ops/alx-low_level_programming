#include "main.h"

/**
 *_memset - function that prints memset
 *@s: the address of memory to print
 *@b: the size of the memory to print
 *@n: print unsigned int
 *Return: returns s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n-- > 0)
	{
		*p++ = b;
	}
	return (s);
}
