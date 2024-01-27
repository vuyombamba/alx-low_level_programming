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
		if (i % 2 != 0)
		{
			_putchar(str[i]);
			i++;
		}
	}
	_putchar('\n');
}
