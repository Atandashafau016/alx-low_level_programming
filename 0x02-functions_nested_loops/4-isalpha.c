#include "main.h"
/**
 *_isalpha - check if char ippercase or lowercase
 *@c: is the character to be checked
 *Return: 1 if letter is uppercase or lowercase and 0 if not
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
