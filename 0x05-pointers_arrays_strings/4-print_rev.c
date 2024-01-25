#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse to stdout
 * @s: the string input
 * Return: void
 */
void print_rev(char *s)
{
	int stringLength = strlen(s) - 1;

	while (stringLength >= 0)
	{
		_putchar(s[stringLength]);
		stringLength--;
	}
	_putchar("\n");
}
