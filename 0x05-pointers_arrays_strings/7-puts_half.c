#include "main.h"
#include <string.h>

/**
 * puts_half - prints half a string
 * @str: string input
 * Return: void
 */
void puts_half(char *str)
{
	int i = strlen(str), n = 0;

	if (i % 2 != 0)
	{
		n = ((i - 1) / 2) + 1;
	} else
	{
		n = (i / 2);
	}
	while (n < i)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
