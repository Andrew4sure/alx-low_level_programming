#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 *Return: Alllways 0 (successs)
 */
/*
 * description: A program will assign a random number to the variable n
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{	printf("%d is positive\n", n);
	}
	else if (n == 0)
	{	printf("%d is zero\n", n);
	}

	else(n < 0);
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
