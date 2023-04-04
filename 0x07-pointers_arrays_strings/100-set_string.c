#include "main.h"

/**
 * set_string - funtion to set value of a pointer to a char
 * @s: pointer value
 * @to: value to be changed to
 */

void set_string(char **s, char *to)
{
	(*s) = to;
}
