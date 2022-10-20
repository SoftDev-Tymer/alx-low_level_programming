#include "main.h"

/**
 * print_alphabet - prints the alphabets in lowercase
 * Return: no return statement.
 */

void print_alphabet(void)
{
	int lwc = 'a';

	while (lwc <= 'z')
	{
		_putchar(lwc);
		lwc += 1;
	}
	_putchar(10);
}
