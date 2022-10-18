#include <stdio.h>

/**
 * main - Entry point
 * Return: returns 0
 */

int main(void)
{
	int no = 48;
	int lo = 'a';

	while (no <= 57)
	{
		putchar(no);
		no += 1;
	}
	while (lo <= 'f')
	{
		putchar(lo);
		lo++;
	}
	putchar('\n');
	return (0);

}
