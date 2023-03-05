#include "main.h"

/**
 * set_string - set value of pointer to a char
 * @s: pointer arg to set
 * @to: char arg to set pointer to
 */

void set_string(char **s, char *to)
{
	*s = to;
}
