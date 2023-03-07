#include "main.h"
/**
 *_puts_recursion - prints recursion in a finite format
 *@s: string to return
 *Return: null
 */
void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar(*s);
_putchra(s + 1);
}
else
{
_putchar('\n');
}
}
