/**
 * _putchar - function to print a single character in terminal
 * @ch: character to be printend
 */

void _putchar(char ch);


/**
 * _puts_recursion - function that prints and a new line using recursion
 * @s: string to be printed in terminal
 */

void _puts_recursion(char *s);

/**
 * - _print_rev_recursion function to print a string in reverse
 * @: string to be printed in reverse
 */

void _print_rev_recursion(char *s);

/**
 * _strlen_recursion - function to get length of a string recusively
 * @s: string to get length from
 * Return: an integer representing the length of a string
 */

int _strlen_recursion(char *s);

/**
 * factorial - function to calculate factorial of a given number
 * @n: number to calcute factorial of
 * Return: integer representing factorial of @n
 */

int factorial(int n);

/**
 * _pow_recursion - function to get the power of integer @x
 * @x: number to calculate power of
 * @y: base to use for the calculation
 * Return: the power of number @x
 */

int _pow_recursion(int x, int y);

/**
 * _sqrt_recursion - function to get the square root of a number
 * @n: number to get square root of
 * Return: integer representing the square root of @n,
 * or -1 if @n is less than 0
 */

int _sqrt_recursion(int n);


/**
 * is_prime_number - function to check if number is prime
 * @n: number to check if prime number
 * Return: 1 if prime number or 0 if not
 */

int is_prime_number(int n);

/**
 * is_palindrome - function to check if string is a palindrome using recursion
 * @s: string to check if palindrome
 * Return: 1 if palindrome else return 0
 */

int is_palindrome(char *s);

/**
 * wildcmp - function to compare two strings using recursion
 * @s1: string one to be compared with @s2
 * @s2: string two to be compared with @s1
 * Return: 1 if strings are the same or o if not. 
 */

int wildcmp(char *s1, char *s2);
