#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the given bit code
 * @index: the set bit
 * Return: 1 if success or  -1 if error ocured.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitmask = 1UL << index;

	unsigned int bit = sizeof(unsigned long int) * 8;

	if (index >= bit)
	{
		return (-1);
	}
	*n |= bitmask;
	return (1);
}
