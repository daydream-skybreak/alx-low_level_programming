#include <unistd.h>

/**
 * _putchar - writes hte character c to stdout
 * @c: the character to print
 *
 * return: 1 on success
 * on error, -1 i sreturned and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
