#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * strdup - string duplicate
 * @str: string to be copied
 * Return: pointer to the duplicate file
 */
char *_strdup(char *str)
{
	int i, cnt;
	char *str2;
	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		cnt++;

	str2 = (char *)malloc((cnt + 1) * sizeof(char));

	for (i = 0; i < cnt; i++)
		str2[i] = str[i];

	str2[cnt] = '\0';

	return (str2);
}
