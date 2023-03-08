#include "main.h"
/**
 *is_palindrome - detects if a string is a palimdrome
 *@s: string
 *Return: 1 if it is a palindrome, 0 if not
 */
int is_palindrome(char *s)
{
if (*s == '\0')
return (1);
return (compartor(s, 0, _strlen_recursion(s) - 1));
}
