#include "main.h"
#include<string.h>
#include<stdio.h>
/**
 * print_rev - printing a reversed string
 * @s: string to reverse
 */
void print_rev(char *s)
{
int l;
int i;
char ch;
char *begin_ptr;
char *end_ptr;
l = strlen(s);
begin_ptr = s;
end_ptr = s;
for (i = 0; i < l - 1; i++)
{
end_ptr++;
for (i = 0; i < l / 2; i++)
{
ch = *end_ptr;
*end_ptr = *begin_ptr;
*begin_ptr = ch;
begin_ptr++;
end_ptr--;
}
}
printf("%s\n", *s);
}
