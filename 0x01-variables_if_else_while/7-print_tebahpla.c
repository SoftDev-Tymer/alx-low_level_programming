#include <stdio.h>

/**
 * main - entry point
 * Return: returns 0
 */

int main(void)
{
	int lcr = 122;

	while (lcr > 96)
	{
		putchar(lcr);
		lcr -= 1;
	}
	putchar('\n');
	return (0);
}
