#include "main.h"
/**
 * main- Determin if a number is positive,negative or zero.
 * zero is the number to be checked
 * return 0 on (success)
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
	return;
}
