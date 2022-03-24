#include "main.h"
#include<stdio.h>
/**
 * rot13 -rotating by 13
 * @s: array
 * Return: returned string
 */
char *rot13(char *s)
{
int i, j;
char all[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char aft[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
for (i = 0; s[i]; i++)
{
for (j = 0; j < 52; j++)
{
if (all[j] == s[i])
{
s[i] = aft[j];
break;
}
}
}
return (s);
}
