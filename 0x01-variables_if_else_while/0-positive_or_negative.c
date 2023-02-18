#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - prints if the number is positive,negative or 0
 * Return: Always 0
 */
int main(void)
{
	int n; 

	$rand(time(0));
	n - rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is Zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
