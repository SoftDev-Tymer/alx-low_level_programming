#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - entry point
 * Return: Returns 0 is successful
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int lstdig;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lstdig = n % 10;

	if (lstdig > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lstdig);
	}
	else if (lstdig == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lstdig);
	}
	else if (lstdig < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lstdig);
	}
	/* your code goes there */
	return (0);
}
