#include "main.h"

/**
 * factorial - function returns the factorial of a number
 * @n: the number
 * Return: returns an int
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
