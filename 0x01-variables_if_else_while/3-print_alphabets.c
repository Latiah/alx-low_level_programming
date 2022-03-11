#include<stdio.h>

/**
 * main -Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
char s = 'a';
char p = 'A';
for (s = 'a'; s <= 'z'; s++)
{
putchar(s);
}
for (p = 'A'; p <= 'Z'; p++)
{
putchar(p);
}
putchar('\n');
return (0);
}
