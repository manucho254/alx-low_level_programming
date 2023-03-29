/**
 * _putchar - function to print single characters in terminal
 * @ch: character to be printed
 */

void _putchar(char ch);

/**
 * *_strcat - function to concatenate two string array
 * @dest: string array to add values to
 * @src: string array to get values from 
 * Return: returns a pointer to the resulting string
 */

char *_strcat(char *dest, char *src);

/**
 * _strncat - function to concatenate two string arrays but only copy upto @n of src
 * @dest: string array to add values to
 * @src: string array to get values from
 * @n: number of bytes to copy from @src
 * Return: returns a pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n);

/**
 * *_strncpy - function to copy a string
 * @dest: string array to add values to
 * @src: string array to get values from
 * @n: number of bytes to copy from @src 
 * Return: returns a pointer to the resulting string
 **/

char *_strncpy(char *dest, char *src, int n);

/**
 * _strcmp - function to compare two strings
 * @s1: string array one to be compared
 * @s2: string array two to be compared
 * Return: returns 0 if @s1 == @s2,
 * -1 if @s1[index] < s2[index],
 * 1 if @s1[index] > s2[index]
 */

int _strcmp(char *s1, char *s2);

/**
 * reverse_array - function to reverse a array of integers
 * @a: array to be reversed
 * @n: number of elements of the array
*/

void reverse_array(int *a, int n);

/** */

char *string_toupper(char *);

/** */

char *cap_string(char *);
