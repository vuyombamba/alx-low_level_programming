#include "main.h"

/**
 * print_triangle - prints a triangle based on the parameter
 * @size: the height of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i = 0;

	while (i < size)
	{
		int j = 0, k = size - i;

		while (k > 1)
		{
			_putchar(' ');
			k--;
		}
		while (j <= i)
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
