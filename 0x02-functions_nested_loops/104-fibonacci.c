#include <stdio.h>
/**
 * main -entry of our program
 *Return: 0 success
 */
int main(void)
{
unsigned long long int a, b, c, i;
a = 0;
b = 1;
c = 1;
for (i = 1; i <= 98; i++)
{
if (i != 98)
printf("%llu, ", c);
else
printf("%llu", c);
a = b;
b = c;
c = a + b;
}
printf("\n");
return (0);
}
