#include "main.h"
/**
 * length - determines the length of a string
 * @str: string to be counted
 * Return: length of the string
 */
int length(char *str)
{
	int len;
	len = 0;

	while(str[len] != '\0')
	{
		len++;
	}
	return (len);
}
/**
 * append_text_to_file - appends text to our file
 * @filename: the file in to which our text is appended
 * @text_content: the text file to be appended
 * Return: 1 if successful otherwise -1
 */
	
int append_text_to_file(const char *filename, char *text_content)
{
	int file, app;

	if (filename == NULL)
	{
		return (-1);
	}
	
	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
	{
		return (-1);
	}
	
	if (text_content != NULL)
	{
		app = write(file, text_content, length(text_content));

		if (app == -1)
		{
			close(file);
			return (-1);
		}
		close(file);
		return (1);
	}
	else
	{
		close(file);
		return (-1);
	}
}
