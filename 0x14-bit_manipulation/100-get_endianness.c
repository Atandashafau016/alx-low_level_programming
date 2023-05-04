#include "main.h"
#include <stdio.h>

/**
*get_endianness - Write a function that checks the endianness.
*Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
unsigned int x = 1;
char *c = (char *)&x;
return (*c == 1);
if (get_endianness() == 0)
return (0);
else
return (1);
}
