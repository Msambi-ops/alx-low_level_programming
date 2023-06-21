#include "main.h"

/**
 *print_last_digit - prints the last digit of a number
 *@num: type integer
 *Return: The value of the last digit
 */

int print_last_digit(int num)
{
	int last_digit = num % 10;

	_putchar("The last digit of %d is %d\n", num, last_digit);
}
