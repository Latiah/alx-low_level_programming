#include "main.h"
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
/**
 * string_nconcat - concatenates string
 * @s1: first string
 * @s2:second string
 * @n: integer
 * Return: what is returned
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, l;
char *s;
if (s1 == NULL)
i = 0;
else
{
for (i = 0; s1[i]; i++)
;
}
if (s2 == NULL)
j = 0;
else
{
for (j = 0; s2[j]; j++)
;
}
if (j > n)
j = n;
s = malloc(sizeof(char) * (i + j + 1));
if (s == NULL)
return (NULL);
for (l = 0; l < i; l++)
s[l] = s1[l];
for (l = 0; l < j; l++)
s[l + i] = s2[l];
s[i + j] = '\0';
return (s);
}
