#include "main.h"

/**
 * main - the function of the program
 *
 * Return: Always 0 (Successful)
 */

int main(void)
{
	char myFunction[8] = "_putchar";
	int i = 0;

	while (i < 0)
	{
		_putchar(myFunction[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
