#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
*_strspn - checks for alphabets
*@accept: a parameter
*@s:  parameter
*Return: void
*/
unsigned int _strspn(char *s, char *accept)
{
return strspn(s, accept);
}
