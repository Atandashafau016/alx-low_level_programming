#include "main.h"
/**
 *_isupper - checks for uppercase character
 *@c: an input character
 *Return: 1 if c is uppercase and 0 if otherwise
 */
int _isupper(int c)
{
char u = 'A';
int i = 0;
for (; u <= 'Z'; u++)
{
if (c == u)
{
i = 1;
break;
}
}
return (i);
}
