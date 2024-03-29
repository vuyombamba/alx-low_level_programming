#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: the length of the line
 * Return: void
 */
void print_diagonal(int n)
{
	int i = 1;

	while (i <= n && n > 0)
	{
		int j = 1;

		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
