#include "main.h"
#include <math.h>
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
unsigned int dec = 0, i = 0, rem, len;
if (!b || b == NULL)
return (0);
len = atoi(b);
while (b != 0)
{
rem = len % 10;
i /= 10;
dec += rem *pow(2, i);
i++;
}
return (dec);
}
