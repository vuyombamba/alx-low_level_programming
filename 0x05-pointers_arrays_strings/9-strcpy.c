#include "main.h"
#include <string.h>

/**
 * _strcpy - copies a string and returns it
 * @dest: temp string to copy to
 * @src: string to copy
 * Return: copied string
 */
char *_strcpy(char *dest, char *src)
{
	int temp = 0;

	while (*(dest + temp) != '\0')
	{
		*(dest + temp) = *(src + temp);
		temp++;
	}
	*(dest + temp) = '\0';
	return (dest);
}
