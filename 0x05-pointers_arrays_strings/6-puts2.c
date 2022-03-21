#include<stdio.h>
#include "main.h"
#include<string.h>
/**
 * puts2 - afunction that displays some numbers
 * @str: string to be passed
 */
void puts2(char *str)
{
while (*str != '\0')
{
printf("%c", *str);
str = str + 2;
}
printf("\n");
}
