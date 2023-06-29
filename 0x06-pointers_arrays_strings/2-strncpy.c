#include "main.h"

/**
 *_strncpy - copies string
 *@dest: char param
 *@src: char param
 *@n: int param
 *Return: copied string
 */

char *_strncpy(char *dest, const char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
