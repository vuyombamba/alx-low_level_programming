#include "main.h"

/**
 * print_square - prints squares
 * @size: the dimensions of the square
 * Return: void
 */
void print_square(int size)
{
	int i = 1, j = 1;

	while (i <= size)
	{
		j = 1;

		while (j <= size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
