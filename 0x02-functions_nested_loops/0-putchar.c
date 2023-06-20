#include "main.h"

/**
 * main - the function of the program
 *
 * Return: Always 0 (Successful)
 */

int main(void)
{
	char myFunction[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(myFunction[i]);
	}
	_putchar('\n');
	return (0);
}
