#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: Void
 */
void times_table(void)
{
	int i = 0, j;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			if (j * i > 9)
			{
				_putchar((j * i) / 10 + '0');
				_putchar((j * i) % 10 + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(' ');
				}
				_putchar((j * i) + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
