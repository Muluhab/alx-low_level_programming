#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *main - entry point
 *
 *Return: 0 okay
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n==0)
{
print("%i is zero\n", n);
}
else if(n<0)
{
 print("%i is negative\n", n);
}
else
{
print("%i is positive\n", n);
}
return (0);
}
