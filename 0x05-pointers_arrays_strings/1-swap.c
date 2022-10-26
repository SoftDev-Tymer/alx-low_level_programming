#include "main.h"

/**
 * swap_int - values of two ints are swapped
 * @a: pointer to first int
 * @b: pointer to second int
 * Return: code returns nothing
 */

void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
