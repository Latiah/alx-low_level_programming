#include<stdio.h>

/**
 * main -Entry point
 *
 *Return: Alawys 0 (success)
 */
int main(void)
{
char n = '0';
char l = 'a';
for (n = '0'; n <= '9'; n++)
{
putchar (n);
}
for (l = 'a'; l <= 'f'; l++)
{
putchar (l);
}
putchar ('\n');
return (0);
}
