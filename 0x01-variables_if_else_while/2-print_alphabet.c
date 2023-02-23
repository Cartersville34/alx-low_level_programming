#include <stdio.h>

/**
 * main - A program prints the alphabet in lowercase, followed by a new line.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char	c = 'a';

	while (c <= 'z')
		putchar(c++);
	putchar('\n');

	return (0);
}
