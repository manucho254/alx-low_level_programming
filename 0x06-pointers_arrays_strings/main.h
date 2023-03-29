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
 * *_strncat
 */

char *_strncat(char *dest, char *src, int n);

/** */

char *_strncpy(char *dest, char *src, int n);

/** */

int _strcmp(char *s1, char *s2);

/** */

void reverse_array(int *a, int n);

/** */

char *string_toupper(char *);

/** */

char *cap_string(char *);
