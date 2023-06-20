#include "main.h"

/**
 *_abs - computes absolute value of an integer
 *@num: variable name
 *Return: absolute value of integer
 */

int _abs(int num)
{
	if (num < 0)
	{
		return (-num);
	}
	else
	{
		return (num);
	}
}
