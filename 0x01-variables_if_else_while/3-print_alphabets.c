#include <stdio.h>

/**
 *main - Entry point
 *
 * return: 0 (success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
