#include "main.h"

/**
 * print_sign - Function prints sign
 * @n: parameter
 * Return: 0 (zero) 1 (positive) -1 (negative)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
