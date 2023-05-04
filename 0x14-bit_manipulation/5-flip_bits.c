#include "main.h"
#include <stdio.h>

/**
*flip_bits - returns the number of bits you would need to flip
*to get from one number to another.
*@n: first number
*@m: second number
*Return: Always 0;
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int i = n ^ m;
unsigned int count = 0;
while (i)
{
count++;
i &= (i - 1);
}
return (count);
}
