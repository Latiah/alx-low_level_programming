#include "main.h"
/**
 * more_numbers -printing more numbers
 */
void more_numbers(void)
{
int i;
char a;
char j;
for (i = 1; i <= 10; i++)
{
for (a = '1'; a <= '9'; a++)
{
_putchar (a);
}
for (j = '0'; j <= '4'; j++)
{
_putchar ('1' + j);
}
_putchar ('\n');
}
}
