#include<stdio.h>
#include<string.h>
#include "main.h"
/**
 *string_toupper - turning lowercase to uppercase
 * @s: string entered
 *Return: return value
 */
char *string_toupper(char *s)
{
int c = 0;
while (s[c] != '\0')
{
if (s[c] >= 'a' && s[c] <= 'z')
{
s[c] = s[c] - 32;
}
c++;
}
return (s);
}

