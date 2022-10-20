#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets 10 times in lowercase
 * Return: no returns.
 */

void print_alphabet_x10(void)
{
	int lwc;
	int n = 0;

	while (n < 10)
	{
		lwc = 'a';
		while (lwc <= 'z')
		{
			_putchar(l);
			lwc += 1;
		}
		_putchar(10);
		n += 1;
	}
}
