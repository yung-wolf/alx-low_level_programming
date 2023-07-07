#include <string.h>

unsigned int binary_to_uint(const char *b)
{
	unsigned int answer = 0;
	int i;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == 0 || b[i] == 1)
			answer = answer * 2 + (b[i] - '0');
		else
			return (0);
	}

	return answer;
}
