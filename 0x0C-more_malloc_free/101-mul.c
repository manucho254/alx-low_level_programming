#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <gmp.h>

void print_error(void);
int check_all_digits(char *str);

/**
 * main - Entry point function
 * Return: always 0 if success
 */

int main(int argc, char *argv[])
{
	mpz_t num_a, num_b, ans;

	if (argc != 3)
	{
		print_error();
		exit(98);
	}

	if (check_all_digits(argv[1]) == 0 || check_all_digits(argv[2]) == 0)
	{
		print_error();
		exit(98);
	}
	else
	{
		mpz_init(num_a);
		mpz_init(num_b);
		mpz_set_ui(num_a, 0);
		mpz_set_ui(num_b, 0);
		mpz_set_str(num_a, argv[1], 10);
		mpz_set_str(num_b, argv[2], 10);
		mpz_mul(ans, num_a, num_b);
		mpz_out_str(stdout, 10, ans);
	}

	return (0);
}

/**
 * check_all_digits - function to check if all values in a,
 * string are integer else return.
 * @str: string to check if all values are digits
 * Return: 0 if a value in string is not an integer else return
 * 1 if all the values are integers
 */

int check_all_digits(char *str)
{
	int i;
	int len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (isdigit(str[i]) == 0)
		{
			return (0);
		}
	}

	return (1);
}

/**
 * print_error - function to print Error in terminal
 */

void print_error(void)
{
	char err[] = "Error";
	int x;
	int len = strlen(err);

	for (x = 0; x < len; x++)
	{
		putchar(err[x]);
	}
	putchar('\n');
}
