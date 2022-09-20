#include <unistd.h>

/**
 * *_putchar - writes character c to stdout
 * @c: the character to print
 *
 * Return: On cussec 1
 * On error, -1 returned, and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}


