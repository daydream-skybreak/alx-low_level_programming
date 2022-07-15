#include "main.h"
/**
 * _strncpy - copies string to a specified number
 * @dest: destination string
 * @src: source string
 * @n: number of string
 *
 * Return: character
 */
char *_strncpy(char *dest, char *src, int n)
{
int x;

for (x = 0; x < n && src[x] != '\0'; x++)
{
dest[x] = src[x];
}

while (n > x)
{
dest[x] = '\0';
x++;
}

return (dest);
}
