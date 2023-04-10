#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_binary - print binary representation of a decimal
 * @n: unsigned char to be converted to decimal
 * Return: converted number
 */

void print_binary(unsigned long int n)
{
unsigned long int bin = 0;
int rem, i = 1;
if (!b)
return (0);
while (b != 0)
{
rem = b % 2;
b /= 2;
bin += rem *i;
i *= 10;
}
return (bin);
}
