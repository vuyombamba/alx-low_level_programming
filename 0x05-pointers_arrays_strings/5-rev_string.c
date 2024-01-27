#include "main.h"
#include <string.h>

/**
 * rev_string - reverses the string
 * @s: the string input to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	int sLength = strlen(s), i = 0;
	char tmp;

	sLength--;
	while (i <= (sLength + 1) / 2)
	{
		tmp = s[i];
		s[i] = s[sLength];
		s[sLength--] = tmp;
		i++;
	}
}
