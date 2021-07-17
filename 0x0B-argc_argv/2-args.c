#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints arguments recieved
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
int g;
for (g = 0; g < argc ; g++)
printf("%s\n", argv[g]);
return (0);
}
