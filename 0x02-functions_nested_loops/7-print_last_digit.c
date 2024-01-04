#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: parameter of the function
 * Return: Always a digit
 */
int print_last_digit(int i)
{
	int j = (i < 0 ? -1 * i : i);
	int k = (j % 10);

	_putchar('0' + k);
	return (k);
}
