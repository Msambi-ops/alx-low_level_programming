#include "main.h"

/**
 * main - the function of the program
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	char myFunction[] = "_putchar";
	int i;

	while (myFunction[i] != '\0')
	{
		_putchar(myFunction[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
