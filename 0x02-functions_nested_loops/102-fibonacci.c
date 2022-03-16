#include<stdio.h>
/**
 * main - entry point
 * Return: 0 success
 */
int main(void)
{
double a, b, c, i;
a = 0;
b = 1;
c = 1;
for (i = 1; i <= 50; i++)
{
printf("%lf, ", c);
a = b;
b = c;
c = a + b;
}
printf("\n");
return (0);
}
