#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - print if a number is positive, negetive or 0
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_max / 2;
	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	else
	{
	printf9"%d is negative\n", n);
	}
return (0);	

