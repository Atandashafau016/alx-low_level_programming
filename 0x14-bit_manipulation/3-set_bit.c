#include "main.h"
#include <stdio.h>

/**
*set_bit - returns the value of a bit at a given index.
*@n: pointer to an int
*@index: number to be indexed
*Return: result on success and -1 on failure
*/

int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
unsigned long int mask = 1UL << index;
*n |= mask;
return (1);
int result;
if (result == 1)
return (1);
else
return (-1);
}
