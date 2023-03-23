#include <stdio.h>

/**
 * main - function that solve the FizzBuzz question
 *
 * print FizzBuzz if number is a multiple of 3 and 5
 * print Fizz if number is a multiple of 3
 * print Buzz if number is a multiple of 5
 * Return: return 0 if success and 1 if error
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", x);
		}
	}
	printf("\n");
	return (0);
}
