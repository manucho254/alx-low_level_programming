#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Entry poin
 * Return: always 0 if success
 * Program to get last digit of number and check greater than, less than
 * and equal to
 * ld
 */

int main(void)
{
	int n;
	int ld; /* last digit of number*/

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, ld);
	}
	else if (n < 6 && n != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld;
	}
	return (0);
}
