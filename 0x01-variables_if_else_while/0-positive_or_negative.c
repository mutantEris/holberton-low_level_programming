#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - determines if a number is positive, negative, or not
* Return:0
/* betty style doc for function main goes there */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n < 0)
printf("%d is negative", n);
else if (n > 0)
printf("%d is positive", n);
else
printf("%d is zero", n);
return (0);
}
