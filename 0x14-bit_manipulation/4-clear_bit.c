#include "main.h"
/**
 * clear_bit - this function sets the value of a bit to 0 at a given index.
 * @n: parameter.
 * @index: index of the bit to set to zero.
 * Return: 1 if success,-1 if error occured.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitmask = ~(1UL << index);
	unsigned int bit = sizeof(unsigned long int) * 8;

	if (index >= bit)
	{
		return (-1);
	}
	bitmask = ~(1UL << index);
	*n &= bitmask;
	return (1);
}
