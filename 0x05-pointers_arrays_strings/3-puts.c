#include "main.h"

/**
 * _puts - funtion prints a string
 * @str: pointer to char
 * Return: code returns nothing
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i += 1;
	}
	_putchar('\n');
}
