#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*binary_to_uint - converts binary number to unit
*@b: string of binary to be converted
*Return: the converted number, or 0 if
*there is one or more chars in the string b that is not 0 or 1
*b is NULL
*/

unsigned int binary_to_uint(const char *b)
{
unsigned int dec = 0;
if (b == NULL)
{
return (0);
}
for (int i = 0; i < strlen(b); i++)
{
if (b[i] != '0' && b[i] != '1')
{
return (0);
}
dec <<= 1;
dec += b[i] - '0';
}
return (dec);
}
