#include "main.h"

/**
 * _islower - checks for lower cases
 * @c: parameter int
 * Return: 1 (succes) 0 (fail)
 */
int _islower(int c)
{
	int i = 97;

	while (i <= 122)
	{
		if (i == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
