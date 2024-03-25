#include "main.h"

/**
 * main - fizz buzz test
 *
 * Return: Success (0)
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("%s", "FizzBuzz ");
		}
		else if ((i % 3) == 0)
		{
			printf("%s", "Fizz ");
		}
		else if ((i % 5) == 0)
		{
			if (i != 100 )
			{
				printf("%s", "Buzz ");
			}else
			{
				printf("%s", "Buzz");
			}
		}
		else
		{
			printf("%d ", i);
		}
		i++;
	}

	return (0);
}
