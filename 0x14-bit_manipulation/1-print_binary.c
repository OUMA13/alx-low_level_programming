#include "main.h"

/**
 * print_binary - prints the binary representation
 * of a number.
 * @c: unsigned long int.
 *
 * Return: no return.
 */
void print_binary(unsigned long int c)
{
	if (c)
	{
		if (c >> 1)
			print_binary(c >> 1);
		_putchar((c & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
