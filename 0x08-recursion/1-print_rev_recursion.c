#include "main.h"

/**
 * _print_rev_recursion - function to print string in reverse
 * @s: string to be printed
 * Return: returns nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
		return;
}
