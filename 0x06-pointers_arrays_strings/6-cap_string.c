#include "main.h"
#include<stdio.h>
/**
 * cap_string - capitalize the first word of a string
 * @s: string
 * Return: what is returned
 */
char *cap_string(char *s)
{
int i, j;
char a[] = " \t\n,;.!?\(){}";
for (i = 0; s[i] != '\0'; i++)
{
if (i == 0)
{
if ((s[i] >= 'a' && s[i] <= 'z'))
s[i] = s[i] - 32;
continue;
}
for (j = 0; j <= 12; j++)
{
if (a[j] == s[i - 1])
{
if ((s[i] >= 'a' && s[i] <= 'z'))
s[i] = s[i] - 32;
continue;
}
}
}
return (s);
}
