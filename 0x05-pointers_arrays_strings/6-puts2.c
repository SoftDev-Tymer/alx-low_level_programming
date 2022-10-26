#include "main.h"

/**
 * puts2 - this function prints every other character
 * @str: pointer to char
 * Return: code returns nothing
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
		i += 1;
	}
	_putchar('\n');
}
