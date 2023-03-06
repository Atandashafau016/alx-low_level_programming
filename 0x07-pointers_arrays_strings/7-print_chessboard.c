#include "main.h"
/**
 *print_chessboard - function that prints chessboard
 *@a: first value -char
 *
 */
void print_chessboard(char (*a)[8])
{
int i, j;
for (i = 0; 1 < 8; 1++)
{
for (j = 0; j < 8; j++)
{
_putchar (a[i][j]);
}
_putchar('\n');
}
}
