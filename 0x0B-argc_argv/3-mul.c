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
int a;
int b;
int answer;
if (argc != 3)
{
printf("Error\n");
return (1);
}
a = atoi(argv[1]);
b = atoi(argv[2]);
answer = (a * b)
printf("%d\n", answer);
return(0);
}
