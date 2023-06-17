#include <stdio.h>
/**
 * main - printing all single digit numbers of base 10 starting from 0,
 * then followed by a new line, using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
