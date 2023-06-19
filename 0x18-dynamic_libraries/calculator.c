/**
 * add - function to add two integers
 *
 * @a: integer one
 * @b: integer two
 *
 * Return: sum of a and b
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - function to subtract two integers
 *
 * @a: integer one
 * @b: integer two
 *
 * Return: difference between a and b
 */

int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - function to multiply two integers
 *
 * @a: integer one
 * @b: integer two
 *
 * Return: the product of a and b
 */

int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - function to devide two integers
 *
 * @a: integer one
 * @b: integer two
 *
 * Return: division of a and b
 */

int div(int a, int b)
{
	return (a / b);
}

/**
 * mod - function to get remainder between two integers
 *
 * @a: integer one
 * @b: integer two
 *
 * Return: remainder between a and b
 */

int mod(int a, int b)
{
	int tmp_a, tmp_b;

	tmp_a = a;
	tmp_b = b;
	if (a < 0)
		a = (a * -1);
	if (b < 0)
		b = (b * -1);

	if (tmp_a < 0 || tmp_b < 0)
		return ((a % b) * -1);
	return (a % b);
}
