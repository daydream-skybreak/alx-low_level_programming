#include "main.h"
/**
 * create_file - creates a file
 * @filename: the file of the name that is being created
 * @text_content: the text content that is going to be added to the file
 * Return: 1 if successful -1 if it fails
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wt, count;
	
	if (filename == NULL)
	{
		return (-1);
	}

	count = 0;
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}

	while (text_content[count] != '\0')
	{
		count++;
	}

	if (text_content != NULL)
	{
		wt = write(fd, text_content, count);
		
		if (wt == -1)
		{
			close(fd);
			return (-1);
		}
		close(fd);
		return (1);
	}
	else
	{
		close(fd);
		return (-1);
	}
}
