#include "main.h"

/**
 * _strlen - function returns the length of a string
 * @s: pointer to the sting
 * Return: int
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i += 1;
	}
	return(i);
}
