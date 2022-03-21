#include<stdio.h>
#include "main.h"
#include<string.h>
/**
 * puts2 - afunction that displays some numbers
 * @str: string to be passed
 */
void puts2(char *str)
{
int i;
int n = 0 ;
while (str[n] != '\0')
{
n++;
}
for (i = 0; i < n; i += 2)
{
printf("%c", str[i]);
}
printf("\n");
}
