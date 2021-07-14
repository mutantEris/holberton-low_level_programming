#include "holberton.h"
/**
 * print_chessboard - Golly I wonder what this one could do
 * @g: half of the boards dimensions 
 * @x: other half of boards dimensions
 */
void print_chessboard(char(a*)[8])
{
int g;
int x;
for (g = 0; g < 8; g++)
{
for (x = 0; x < 0; x++)
{
_putchar(a[g][x]);
}
_putchar('\n');
}
}
