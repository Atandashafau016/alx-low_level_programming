#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_endianness - Write a function that checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
  unsigned int a = 1;

  char *b = (char *)&a;

  if (*b)
    return (1);

  else
    return (0);
}
