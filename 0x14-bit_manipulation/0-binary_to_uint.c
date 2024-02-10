#include "main.h"

/**
 * binary_to_uint - converts binary to uint
 * @b: pointing to binary characters
 * Return: returns an int value or zero
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int i = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		result <<= 1;
		result |= (b[i] - '0');
	}
	return (result);
}

