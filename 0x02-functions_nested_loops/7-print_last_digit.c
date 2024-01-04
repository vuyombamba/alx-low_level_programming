#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: parameter of the function
 * Return: Always a digit
 */
int print_last_digit(int i)
{
	int k = (i % 10);

	if (k < 0)
	{
		k *= -1;
	}
	_putchar('0' + k);
	return (k);
}
