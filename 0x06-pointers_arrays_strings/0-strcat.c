#include "main.h"

/**
 * _strcat - the function appends a string to another string
 * @dest: string variable to append to
 * @src: the copied string
 * Return: the copied string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;

	while(*(src + i) != '\n')
	{
		dest += *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
