#include "main.h"
#include<stdio.h>
/**
 * _strncpy - for copying a string
 * @dest: first string
 * @src: second string
 * @n: integer
 * Return: what is returned
 */
char *_strncpy(char *dest,  char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for ( ; i < n; i++)
dest[i] = '\0';
return (dest);
}
