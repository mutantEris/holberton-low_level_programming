#include <stdio.h>
#include <stdlib.h>
/**
 * main - does do's
 * @argc: numbers of things
 * @argv: the things
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
int a;
int b;
int wumbo = 0;
for (a = 1; a < argc; a++)
{
for (b = 0; argv[a][b]; b++)
{
if (argv[a][b] < '0' || argv[a][b] > '9')
{
printf("Error\n");
return (1);
}
}
wumbo += atoi(argv[a]);
}
printf("%d\n", wumbo);
return (0);
}
