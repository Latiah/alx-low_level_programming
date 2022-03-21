#include "main.h"
#include<string.h>
#include<stdio.h>
/**
 * print_rev - printing a reversed string
 * @s: string to reverse
 */
void print_rev(char *s)
{
*s = s[100];
int l, i, tmp, rind, lind;
l = strlen(s);
lind = 0;
rind = l - 1;
for (i = lind; i < rind; i++)
{
tmp = s[i];
s[i] = s[rind];
s[rind] = tmp;
rind--;
}
printf("%s\n", s);
}
