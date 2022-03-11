#include<stdio.h>

/**
 * main -entry
 *
 *Return: Always 0 (success)
 */
int main(void)
{
char p = 'a';
for (p = 'a'; p <= 'z'; p++)
{
if (p != 'e' && p != 'q')
{
putchar (p);
}
}
putchar ('\n');
return (0);
}
