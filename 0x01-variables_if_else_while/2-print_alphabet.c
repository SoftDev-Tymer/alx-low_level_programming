#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 * Return: returns 0 if successful
 */

int main(void)
{
	int lc = 'a';

	while (lc <= 'z')
	{
		putchar(lc);
		lc += 1;
	}
	putchar('\n');
	return (0);
}
