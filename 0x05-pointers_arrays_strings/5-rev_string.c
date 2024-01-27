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
	char temp;

	while (i < sLength)
	{
		temp = s[i];
		s[i] = s[sLength - 1];
		s[sLength - 1] = temp;
		sLength--;
		i++;
	}
}
