#include "main.h"
/**
 * more_numbers -printing more numbers
 */
void more_numbers(void)
{
int i;
int a;
int j;
for (a = 1; a <= 10; a++)
{
for (i = 0; i <= 9; i++)
{
_putchar (i);
}
for (j = 0; j <= 4; j++)
{
_putchar ('1' + j);
}
_putchar ('\n');
}
