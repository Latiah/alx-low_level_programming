#include<stdio.h>
#include "main.h"
#include<string.h>
/**
 * puts2 - afunction that displays some numbers
 * @str: string to be passed
 */
void puts2(char *str)
{
int l;
int i = 0;
l = strlen(str);
while (i < l)
{
puts(str);
i = i + 2;
}
}
