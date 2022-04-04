#include "main.h"
#include<stdlib.h>
#include<string.h>
/**
 * str_concat -it concatenates a string
 * @s1: first string
 * @s2: second string
 * Return: what is returned
 */
char *str_concat(char *s1, char *s2)
{
int i, j;
int size, k;
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
size = i + j + 1;
s = malloc(size *sizeof(char));
if (s == NULL)
return (NULL);
for (k = 0; k < i; k++)
s[k] = s1[k];
for (k = 0; k < j; k++)
s[i + j] = s2[k];
s[i + j] = '\0';
return (s);
}
