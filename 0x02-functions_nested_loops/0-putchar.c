#include "main.h"

/**
 * main - program that prints Holberton.
 *
 * Return: int
 */

int main(void)
{
	int n = 0;
	char ptc[7] = "putchar";

	while (n < 7)
	{
		_putchar(ptc[n]);
		n += 1;
	}
	_putchar('\n');
	return (0);
}
