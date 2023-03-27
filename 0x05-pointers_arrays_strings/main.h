/**
 * File to hold all our prototypes
 */

/**
 * _putchar - function to print out a single character in terminal
 * @ch: character to be printed 
 */

void _putchar(char ch);

/**
 * reset_to_98 - function to reset value of an, 
 * int pointer and updates it to 98
 * @n: takes a pointer as an argument
 */

void reset_to_98(int *n);

/**
 * swap_int - function to swap two integers.
 * @a: interger a to be swapped
 * @b: integer b to be swapped
 */

void swap_int(int *a, int *b);

/**
 * _strlen - function to get the length of a string
 * @s: the string array
 * Return: integer of the string length
 */

int _strlen(char *s);

/**
 * _puts - function to print a string in the terminal
 * @str: the string array
 */

void _puts(char *str);

/**
 * print_rev - function to print string is reverse
 * @s: the string array
 */

void print_rev(char *s);

/**
 * rev_string - function to reverse a string
 * @s: the string array to be reversed
 */

void rev_string(char *s);


/**
 * puts2 - function to print string characters in an even way,
 * if the index is even print value
 * @str: string array to print characters from 
 */

void puts2(char *str);


/**
 * puts_half - function to print half an string array in terminal
 * @str: string array to print characters from
 */

void puts_half(char *str);

/**
 * print_array - function to print @n elements array
 * @a: array to get values from
 * @n: number of elements to print
 */

void print_array(int *a, int n);


/**
 * _strcpy - function like strcpy to copy a string into another,
 * one and replace all its previous values with the new ones
 * @dest: destination string array to copy values to
 * @src: string array with the values to copy
 */

char *_strcpy(char *dest, char *src);
