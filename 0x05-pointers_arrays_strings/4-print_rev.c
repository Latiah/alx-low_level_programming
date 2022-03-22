#include "main.h"
#include<string.h>
#include<stdio.h>
/**
 * print_rev - printing a reversed string
 * @s: string to reverse
 */
void print_rev(char *s)
{
int i = 0;
while (*(s + i))
i++;
i = i - 1;
while (i >= 0)
{
putchar(*(s + i));
i--;
}
putchar('\n');
}
