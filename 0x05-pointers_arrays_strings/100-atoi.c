#include<stdio.h>
#include "main.h"
#include<stdlib.h>
/**
 *_atoi -a function that changes a string to a number
 * @s: string to be entered
 * Return: what is returned
 */
int _atoi(char *s)
{
unsigned long int res = 0;
int sign = 1;
int i = 0;
if (s[0] == '-')
{
sign = -1;
i++;
}
for (; s[i] != '\0'; ++i)
res = res * 10 + s[i] - '0';
return (sign *res);
}

