#include "main.h"

/**
 * main - the function of the program
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	char prnt[] = "_putchar";
	int i;
	
	while (prnt[i] != '\0')
	{
		_putchar(prnt[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
