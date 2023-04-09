#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * binary_to_uint - convert binary to decimal
 * @b: unsigned char to be converted to decimal
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int base = 1, decimal = 0, bin = 0, rem, strlen;


	if (!b)
		return (0);
	strlen = atoi(b);

	while (strlen)
	{
		rem = len % 10;
		decimal = decimal + rem * base;
		len = len / 10;
		base = base * 2;
	}

while (b[bin])
{
	if (b[bin] < '0' || b[bin] > '1')
	return (0);
	count++;
}
	return (decimal);
}
