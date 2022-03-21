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
l = strlen(str);
char s[l];
int i = 0;
*str = s[0];
while (i < l)
{
printf("%s\n", str);
i = i + 2;
}
}
