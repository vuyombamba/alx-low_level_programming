#include "main.h"

/**
 * _isdigit - checks if the value is digit
 * @c: intakes the value to be checked
 * Return: 1 (True) or 0 (False)
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
