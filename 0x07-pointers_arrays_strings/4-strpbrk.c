#include "main.h"
#include <stddef.h>
/**
 *_strpbrk - search for string
 *@s: string parameter
 *@accept: string parameter
 *Return: p, NULL if false
 */



char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
		}
	}
	return (NULL);
}
