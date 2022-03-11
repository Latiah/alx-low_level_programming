#include<stdio.h>

/**
 * main -entry
 *
 *Return: Always 0 (success)
 */
int main(void)
{
char r = 'a';
for (r = 'a'; r <= 'z'; r++)
{
if (r != 'e' && r != 'q')
{
putchar (r);
}
}
putchar ('\n');
return (0);
}
