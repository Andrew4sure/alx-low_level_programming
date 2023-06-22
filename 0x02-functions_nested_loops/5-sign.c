include "main.h"
/**
 * int print_sign - function that prints sign of a number
 *
 * Return (1) and print + for n greater than zero
 *
 * Return (0) and and print 0 for n equal zero
 *
 * Return (-1) and print - for n less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar(43);
	return(1);
	}
	else if (n == 0)
	{
		putchar(0);
	return (0);
	}
	else
	{
		putchar(45);
	return (-1);
	}
	putchar("\n");
}
