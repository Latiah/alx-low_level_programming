#include<stdio.h>

/**
 * main -Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
int n = '0';
for (n = '0'; n <= '9'; ++n)
{
putchar (n);
if (n == '9')
break;
putchar (',');
putchar (' ');
}
putchar ('\n');
return (0);
}
