#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @a: The character to print
 * a: The character to print
 *Return: On success return one
 * On error, -one is returned, and errno is set appropriately
 */
int _putchar(char c )
{
	return (write(1, c, 1));
}
