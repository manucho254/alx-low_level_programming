/**
 * *_memset - function that fills memory with a constant byte
 * @s: memory area to work on
 * @b: constant byte
 * @n: number of bytes to fill
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0;  x < n;  x++)
	{
		s[x] = b;
	}

	return (s);
}
