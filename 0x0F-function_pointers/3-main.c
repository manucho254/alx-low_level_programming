#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * main - main function
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: always 0 if success
 */

int main(int argc, char *argv[])
{
	int num_a, num_b;
	bool check;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	check = (strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0);
	if (strcmp(argv[3], "0") == 0 && check == 1)
	{
		printf("Error\n");
		exit(100);
	}
	else
	{
		num_a = atoi(argv[1]);
		num_b = atoi(argv[3]);

		printf("%d \n", get_op_func(argv[2])(num_a, num_b));
	}

	return (0);
}
