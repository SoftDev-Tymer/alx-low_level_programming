#include "main.h"

/**
 * _strlen_recursion - function that prints the length of a string
 * @s: the string
 * Return: returns 1 upon success
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;

	return (1 + _strlen_recursion(s));
}
