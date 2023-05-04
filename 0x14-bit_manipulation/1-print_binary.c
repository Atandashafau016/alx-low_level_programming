#include "main.h"
#include <stdio.h>

/**
*print_binary -  prints the binary representation of a number.
*@n: number to be converted
*Return: 0
*/

void print_binary(unsigned long int n)
{
int i;
for (i = sizeof(unsigned long int) * 8 - 1; i >= 0; i--)
{
unsigned long int mask = 1UL << i;
if ((n & mask) != 0)
{
_putchar("1");
}
else
{
_putchar("0");
}
}
_putchar("\n");
}
