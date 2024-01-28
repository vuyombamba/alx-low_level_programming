#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character in a string
 * @str: string input
 * Return: void
 */
void puts2(char *str)
{
	int i = 0, j = strlen(str);

	while (i < j)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
