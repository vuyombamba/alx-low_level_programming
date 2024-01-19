#include "main.h"

/**
 * more_numbers - prints numbers from 0 -14 ten times
 *
 * Return: void
 */
void more_numbers(void)
{
	int i = 0;

	while (i <= 10)
	{
		int j = 48, l = 1;

		while (l <= 15)
		{
			if (l >= 11)
			{
				if (l == 11)
				{
					j = 48;
				}
				_putchar(49);
			}
			_putchar(j);
			j++;
			l++;
		}
		_putchar('\n');
		i++;
	}
}
