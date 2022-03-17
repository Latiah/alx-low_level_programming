#include "main.h"
/**
 * print_square - printing #
 * @size: size of square
 */
void print_square(int size)
{
int i;
int j;
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
_putchar ("#");
}
_putchar ("\n");
}
_putchar ("\n");
}
