#include<stdio.h>

/**
 * main -Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
int n = '1';
for (n = '1'; n <= '9'; n++)
{
putchar (n);
putchar (',');
putchar (' ');
}
putchar ('\n');
return (0);
}
