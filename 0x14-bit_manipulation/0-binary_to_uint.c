#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @binary: A pointer to the string of 0s and 1s
 *
 * Return: The converted number, or 0
 * if there is one or more characters in the string that is not 0 or 1, or
 * binary is NULL
 */
unsigned int binary_to_uint(const char *binary)
{
	unsigned int result = 0, bit = 1;
	int i;

	if (binary == NULL)
		return (0);

	for (i = strlen(binary) - 1; i >= 0; i--)
	{
		if (binary[i] == '1')
			result += bit;
		else if (binary[i] != '0')
			return (0);

		bit <<= 1;
	}

	return (result);
}

