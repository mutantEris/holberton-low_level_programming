#include <stdio.h>
/**
 * main - prints own name
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
argv[0] = argv[0];
printf("%d\n", argc - 1);
return (0);
}
