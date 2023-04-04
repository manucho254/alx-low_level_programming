/**
 * _putchar - function to print single characters in terminal
 * @ch: character to be printed in terminal
 */

void _putchar(char ch);

/**
 * *_memset - function that fills memory with a constant byte
 * @s: memory area to work on
 * @b: constant byte
 * @n: number of bytes to fill
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n);

/**
 * *_memcpy - function that copies memory area
 * @src: memory area to be copied
 * @dest: memory to copy bytes to
 * @n: number of bytes to copy
 * Return: pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * *_strchr - function that locates the first occcurence,
 * of characher in a string
 * @s: string to find character
 * @c: character to look for
 * Return: NULL if character is not found else return the pointer,
 * to the first occurrence of the pointer.
 */

char *_strchr(char *s, char c);


/**
 * _strspn - function to get the length of prefix a substring
 * @s: string to find the prefix substring length
 * @accept: bytes to get from string
 * Return: number of bytes in intial segment of @s
 */

unsigned int _strspn(char *s, char *accept);

/**
 * strpbrk - function that searches a,
 * string for any of a set of bytes
 * Return: pointer to the byte in ,
 * *s that matches on of the bytes in accept
 */

char *_strpbrk(char *s, char *accept);

/**
 * *_strstr - function that locates a substring
 * @haystack: string to find substring @needle from
 * @needle: substring to find in string
 * Return: pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle);

/**
 * print_chessboard - function to print a chessboard in terminal
 * (*a)[8] - a two dimestional array
 */

void print_chessboard(char (*a)[8]);

/**
 * print_diagsums - that prints the sum of the ,
 * two diagonals of a square matrix of integers.
 * @a: array to print 
 * @size: number of rows in multidemensional array 
 */

void print_diagsums(int *a, int size);
