#include<stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int first;
int second;
for (first = 48; first < 57; first++)
{
for (second = first + 1; second < 58 ; second++)
{
putchar (first);
putchar (second);
if (first == 56 && second == 57)
{
break;
}
putchar (',');
putchar (' ');
}
}
putchar ('\n');
return (0);
}






























