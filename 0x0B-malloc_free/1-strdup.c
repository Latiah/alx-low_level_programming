#include "main.h"
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
/**
 * _strdup - copies string
 * @str: string
 * Return: what is returned
 */
char *_strdup(char *str)
{
int i;
char *s;
for (i = 0; str[i]; ++i)
;
s = malloc(i * sizeof(char));
if (s == NULL || i == 0)
return (NULL);
for (i = 0; str[i]; i++)
*(s + i) = *(str + i);
return (s);
}

