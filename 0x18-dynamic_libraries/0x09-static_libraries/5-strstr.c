#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
*_strstr - checks for alphabets
*@haystack: a parameter -char
*@needle: a parameter -char
*Return: parameters
*/
char *_strstr(char *haystack, char *needle)
{
  return strstr(haystack, needle);
}
