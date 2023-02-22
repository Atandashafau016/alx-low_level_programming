#include "main.h"
/**
*print_sign - prints sighn of a number
*@n: the number of sign to be printed
*Return: 1 if number is greater than 0, 0 if nuber is equal to 0 and -1 if number is less than 0
*/
int print_sign(int n)
{
if (n > 0)
{_putchar('+');
return (1); }
else if (n == 0)
{_putchar('0');
return (0); }
else
{_putchar('-');
return (-1); }
}
