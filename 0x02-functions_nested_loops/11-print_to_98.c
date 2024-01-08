#include "main.h"

/**
 * print_to_98 - print numbers to 98
 * @n: parameter to take int values
 * Return: void
 */
void print_to_98(int n)
{
	int i = n;

	if (n < 98)
	{
		while (i != 98)
		{
				if(i > 9)
				{
					_putchar((i/10) + '0');
					_putchar((i%10) + '0');
				}else
				{
					_putchar(i + '0');
				}
				i++;
				_putchar(',');
				_putchar(' ');
		}
	}else if (n > 98)
	{
		i = n;

		while (i != 98)
		{
			if(i > 9)
			{
				_putchar((i/10) + '0');
				_putchar((i%10) + '0');
			}else
			{
				_putchar(i + '0');
			}
			i--;
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}else
	{
		_putchar('9');
		_putchar('8');
	}
	_putchar('\n');
}
