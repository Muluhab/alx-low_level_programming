#include <stdio.h>
/**
 *main - entry point
 *
 *Return: 0 okay
 */
int main(void)
{
int a;
long int b;
long long int c;
char d;
float f;
printf("size of a char: %d byte(s)\n", (unsigned long)sizeof(d));
printf("size of an int: %d byte(s)\n", (unsigned long)sizeof(a));
printf("size of a long int: %d byte(s)\n", (unsigned long)sizeof(b));
printf("size of a long along int: %d byte(s)\n", (unsigned long)sizeof(c));
printf("size of a flot: %d byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
