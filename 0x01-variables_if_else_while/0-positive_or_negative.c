#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - prints a random number and states whether its postive, negative or zero
 *
 *Return: Always 0
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n==0)
{
prinf("%l is zero\n", n);
}
else if (n<0)
{
 printf("%l is negative\n", n);
}
else
{
printf("%l is positive\n", n);
}
return (0);
}
