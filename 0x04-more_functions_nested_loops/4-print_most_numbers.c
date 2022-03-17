#include "main.h"
/**
 * print_most_numbers -printing numbers
 */
void print_most_numbers(void)
{
char k;
for (k = '0'; k <= '9'; k++)
{
if ((k == '2') || (k == '4'))
{
continue;
_putchar (k);
}
}
_putchar ('\n');
}
