#include <main.h>

/** 
 * main - Entry point
 *
 * Return: always 0 if success
 *
 * Program to print all the alphabets using lowercase letters 
 */

int main (void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{ 
	char x;
	
	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');

}
