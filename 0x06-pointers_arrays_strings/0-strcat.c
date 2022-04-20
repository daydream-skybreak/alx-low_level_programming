#include "main.h"
/**
 * _strcat - concatinates two strings together
 * @dest: pointer to destination
 * @src: pointer to a source
 *
 * Return: character
 */
char *_strcat(char *dest, char *src)
{
int i, j;
i = 0;

while (dest[i] != '\0')
{
i++;
}
j = 0;

while (src[j] != '\0')
{	
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';

return (dest);
}
