#include <stdio.h>
/**
 * main - writes the alphabet
 * Return:0
 */
int main(void)
{
int g;
for (g = 0; g < 10; g++)
{
putchar(g + '0');
if (g != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
