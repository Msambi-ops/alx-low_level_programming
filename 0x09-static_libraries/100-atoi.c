#include "main.h"
/**
 * _atoi - convert a string into an integer
 *
 * @s: the string to use
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int sign = 1, i = 0;
	unsigned int rest = 0;


	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		rest = (rest * 10) + (s[i] - '0');
		i++;
	}
	rest *= sign;
	return (rest);
}