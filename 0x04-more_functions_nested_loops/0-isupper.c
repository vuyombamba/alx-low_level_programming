#include "main.h"

/**
 * _isupper - checks if the parameter is an uppercase
 * @c: int value of a char
 * Return: 1 (success) or 0 (fail)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
