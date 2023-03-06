#include "main.h"
#include <stdlib.h>
/**
 *print_diagsums -  prints the sum of the
 *two diagonals of a square matrix of integers.
 *@a: first value -char
 *@size: second value -int
 */
void print_diagsums(int *a, int size)
{
int i, j, suma_1 = 0, suma_2 = 0, k, l = 0;
k = size - 1;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (i == j)
suma_1 += a[1];
if (j == k)
suma_2 += a[1];
l++;
}
k--;
}
printf("%i, %i\n", suma_1, suma_2);
}
