#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void print_error(void);
long int get_num(char *str);
long int multiply(long int a, long int b);
void check_for_digit(char *str);
/**
 * main - Entry point function
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: always 0 if success
 */

int main(int argc, char *argv[])
{
	int j;
	long int num_a, num_b;

	if (argc != 3)
	{
		print_error();
		return (NULL);
	}

	check_for_digit(argv[1]);
	check_for_digit(argv[1]);
    num_a = get_num(argv[1]);
	num_b = get_num(argv[2]);

	multiply(num_a, num_b);

	return (0);
}

long int multiply(long int a, long int b)
{
	return (a * b);
}

long int get_num(char *str)
{
	int x;
	long int num = 0;

	for (x = 0; x < strlen(str); x++)
	{
		num = (num * 10) + atoi(str[x]);
	}

	return (num);
}

void print_error(void)
{
	char err[] = "Error";
	int y;

	for (y = 0; y < strlen(s); y++)
	{
		_putchar(err[y]);
	}
}

void check_for_digit(char *str)
{
	int x;

	for (x = 0; x < strlen(str); x++)
	{
		if (isdigit(str[x]) == 0)
		{
			print_error();
			return (NULL);
		}
	}
}
