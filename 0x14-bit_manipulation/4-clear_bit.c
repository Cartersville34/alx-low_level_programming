#include "main.h"
#include <stdio.h>

/**
 * clear_bit - puts a bit at a given index to 0
 * @n: pointer to the number to change
 * @index: index of the bit to set to 0
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_mask;

	if (index > 63)
		return (-1);
	bit_mask = 1UL << index;
	*n = (~(bit_mask) & *n);
	return (1);
}
