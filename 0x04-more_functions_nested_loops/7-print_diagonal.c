#include "main.h"
/**
 * print_diagonal - for printing a diagonalssss
 * @n: number to enter
 */
void print_diagonal(int n)
{
int i;
for (i = 1; i <= n; i++)
{
_putchar ('\\');
_putchar (' ');
_putchar ('\n');
}
if ((n == 0) || (n < 0))
{
_putchar ('\n');
}
}
