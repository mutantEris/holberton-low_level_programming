#include <stdio.h>
/**
 * main - writes the alphabet
 * Return:0
 */
int main(void)
{
int g;
for (g = 0; g < 10; g++)
putchar(g + '0');
for (g = 'a'; g <= 'f'; g++)
putchar(g);
putchar('\n');
return (0);
}
