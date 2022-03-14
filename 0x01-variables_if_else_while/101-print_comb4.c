#include<stdio.h>

/**
 * main -Entry
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int first;
int second;
int third;
for (first = 48; first < 56; first++)
{
for (second = first + 1; second < 57; second++)
{
for (third = second + 1; third < 58; third++)
{
putchar (first);
putchar (second);
putchar (third);
if (first == 55 && second == 56 && third == 57)
break;
putchar (',');
putchar (' ');
}
}
}
putchar ('\n');
return (0);
}
