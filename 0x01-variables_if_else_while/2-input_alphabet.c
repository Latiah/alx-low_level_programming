#include<stdio.h>

/**
 * main -Entry
 *
 *Return: -Always 0 (success)
 */
int main(void)
{
char lt = 'a';
for (lt = 'a'; lt <= 'z'; lt++)
{
putchar(lt);
}
putchar('\n');
return (0);
}
