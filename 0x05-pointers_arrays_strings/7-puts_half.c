#include "main.h"
#include<string.h>
#include<stdio.h>
/**
 * puts_half -puts second half of the string
 * @str: string entered
 */
void puts_half(char *str)
{
int j, i = 0;
while (*(str + i))
i++;
j = i / 2;
if (i % 2)
j += 1;
while (j < i)
{
_putchar(*(str + j));
j++;
}
_putchar('\n');
}
