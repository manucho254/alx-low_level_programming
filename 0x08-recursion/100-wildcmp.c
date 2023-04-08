#include "main.h"
#include <string.h>

/**
 *
 */

int string_comparison(char *s1, char *s2, int index)
{
	if ((*s1 + index) == *(s2 + index))
	{
		return string_comparison((s1 + index), (s2 + index), index + 1);
	}

	return (0);
}
