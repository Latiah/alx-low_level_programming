#include <stdio.h>
/**
 * main -entry of our program
 *Return: 0 success
 */
int main(void)
{
long int a, b, c, i;
a = 0;
b = 1;
c = 1;
for (i = 1; i <= 98; i++)
{
if (i != 98)
printf("%ld, ", c);
else
printf("%ld", c);
a = b;
b = c;
c = a + b;
}
printf("\n");
return (0);
}
