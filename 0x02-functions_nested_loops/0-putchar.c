#include "main.h"

/**
 * main - the function of the program
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	char _putchar[] = "_putchar";
	int i;

	while (_putchar[i] != '\0')
	{
		_putchar(_putchar[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
