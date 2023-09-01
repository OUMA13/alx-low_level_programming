#include "main.h"

/**
 * get_bit - returns the value of a bit at a given
 * index.
 * @c: unsigned long int input.
 * @index: index of the bit.
 *
 * Return: value of the bit.
 */
int get_bit(unsigned long int c, unsigned int index)
{
	unsigned int i;

	if (c == 0 && index < 64)
		return (0);

	for (i = 0; i <= 63; c >>= 1, i++)
	{
		if (index == i)
		{
			return (c & 1);
		}
	}

	return (-1);
}
