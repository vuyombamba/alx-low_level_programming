#include "main.h"

/**
 * _isalpha - function checks for alphabets
 * @c: parameter int
 * Return: 1 (success) 0 (fail)
 */
int _isalpha(int c)
{
	int i = 65;

	while (i <= 90)
	{
		if (i == c)
		{
			return (1);
		}
		i++;
	}
	i = 97;
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
