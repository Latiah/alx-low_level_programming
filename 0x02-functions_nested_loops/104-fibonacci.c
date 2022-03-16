#include <stdio.h>
/**
 * main -entry of our program
 *Return: 0 success
 */
int main(void)
{
int a, b, c, i;
a = 0;
b = 1;
c = 1;
for (i = 1; i <= 98; i++)
{
printf("%d, ", c);
a = b;
b = c;
c = a + b;
}
printf("\n");
return (0);
}
