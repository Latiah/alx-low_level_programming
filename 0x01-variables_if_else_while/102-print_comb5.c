#include<stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int f;
int k;
for (f = 0; f < 99; f++)
{
for (k = f + 1; k < 100; k++)
{
if (f < k)
{
putchar ((f / 10) + '0');
putchar ((f % 10) + '0');
putchar (' ');
putchar ((k / 10) + '0');
putchar ((k % 10) + '0');
if (f != 98 || k != 99)
{
putchar (',');
putchar (' ');
}
}
}
}
putchar ('\n');
return (0);
}
