#include "main.h"
#include<string.h>
#include<stdio.h>
/**
 * puts_half -puts second half of the string
 * @str: string entered
 */
void puts_half(char *str)
{
int len;
int i;
int n;
len = strlen(str);
n = (len - 1) / 2;
for (i = 0; i < n; i++)
{
printf("%c", str[i]);
}
printf("\n");
}