#include "variadic_functions.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	print_all("ceisf", 'B', 3, "stSchool", 2.3, 2.3, 3.2);
	print_all("fcsi", 3.14435, 'H', "#Cisfun", 0);
	print_all("mnbvfqcepolsbxzi", 3.14435, 'H', "#Cisfun", 0);
	print_all("qwertyuopadghjklzxvbnm");
	print_all("fcsi", 3.14435, 'H', NULL, 402);
	return (0);
}
