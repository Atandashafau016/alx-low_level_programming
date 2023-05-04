#include "main.h"
#include <stdio.h>

/**
*get_bit - returns the value of a bit at a given index.
*@index: index starting from 0 of the bit
*@n: first number
*Return: the value of the bit at index index or -1 if an error occured
*/

int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
unsigned long int mask = 1UL << index;
return ((n & mask) != 0);
int bit_value;
if (bit_value != -1)
return (bit_value);
else
return (-1);
}
