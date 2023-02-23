#include "main.h"
/**
 *_isdigit - checks if parameter is between 0 and 9
 *@c: input numbers
 *Return: 1 if the number is from 0 to 9 and 0 if otherwise
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
