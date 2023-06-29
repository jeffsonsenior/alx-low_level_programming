#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character a to stdout
 * @a: The character to print
 * a: The character to print
 *Return: On success return 1
 * On error, -1 is returned, and errno is set appropriately
 */
int _putchar(char a)
{
	return (write(1, &a, 1));
}
