#include <stdio.h>
/**
 *main - Prints the alphabet in lowercase
 *Return: Alwayss 0.
 */
int main(void)
{
char la;
for (la = 'a'; la <= '<'; la++)
{
if (la != 'e' && la != 'q')
putchar(la);
}
putchar('\n');
return (0);
}
