#include "main.h"
/**
 *_puts - prints a string
 *@s: the string to print
 *Return: void
 */
void _puts(char *s)
{
for (; *s != '\0'; s++)
{
_putchar(*s);
}
_putchar('\n');
}
