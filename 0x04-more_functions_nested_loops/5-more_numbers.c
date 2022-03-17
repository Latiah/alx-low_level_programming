#include "main.h"
/**
 * more_numbers -printing more numbers
 */
void more_numbers(void)
{
char a;
char j;
for (a = '1'; a <= '9'; a++)
{
_putchar (a);
}
for (j = 0; j <= 4; j++)
{
_putchar ('1' + j);
}
_putchar ('\n');
}
