#include<stdio.h>
#include "main.h"
/**
 * print_to_98 - displaying to 98
 * @n: number entered
 * Return: no return type here
 */
void print_to_98(int n)
{
int a;
if (n <= 98)
{
for (a = n; a <= 98; a++)
{
if (a != 98)
printf("%d, ", a);
else
printf("%d", a);
}
}
else if (n >= 98)
{
int b;
for (b = n; b >= 98; b--)
{
if (b != 98)
printf("%d, ", b);
else
printf("%d", b);
}
}
}
