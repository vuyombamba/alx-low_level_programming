#include "main.h"

/**
 * print_line - prints _ based on the parameter
 * @n: number of time to print the line
 * Return: void
 */
void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
		_putchar('_');
	}
	_putchar('\n');
}
