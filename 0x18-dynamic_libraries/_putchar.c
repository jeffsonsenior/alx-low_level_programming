#include < unistd.h>
/**
 * _putchar - write character c in stdout
 * @c: the character to print
 *
 * Return: on success 1.
 * on error, -1 is returned,and errorno is set appropriate
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
