#include "main.h"
/**
 * _strcpy - copies elements of one string to another string
 * @dest: destination pointer
 * @src: source pointer
 *
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
