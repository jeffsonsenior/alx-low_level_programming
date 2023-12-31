#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: is the character to be printed
 *
 * Return: On success 1.
 * On error, -1 is returned, and error number is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

