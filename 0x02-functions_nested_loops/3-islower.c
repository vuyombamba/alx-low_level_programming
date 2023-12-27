#include "main.h"

int _islower(int c)
{
	int i = 97;

	while (i <= 122)
	{
		if (i == c)
		{
			return (1);
			break;
		}
		i++;
	}
	return (0);
}
