#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the elements inside an array
 * @a: the array
 * @n: number of elements to print
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		i++;
		if (i < n)
		{
			printf(", ");
		}
	}
	printf("\n");
}
