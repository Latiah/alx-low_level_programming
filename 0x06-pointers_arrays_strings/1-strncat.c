#include "main.h"
#include<stdio.h>
/**
 * _strncat -concatinating
 * @dest: string
 * @src: string
 * @n: the integer
 * Return: value returned
 */
char *_strncat(char *dest, char *src, int n)
{
int l, m;
l = m = 0;
while (*(dest + l))
l++;
while (m < n && *(src + m))
{
*(dest + l) = *(src + m);
l++;
m++;
}
if (m < n)
*(dest + l) = *(src + m);
return (dest);
}
