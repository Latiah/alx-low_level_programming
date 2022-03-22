#include<string.h>
#include<stdio.h>
#include "main.h"
/**
 * _strcpy -this copies a string
 * @dest: a string
 * @src: another string
 * Return: string returned
 */
char *_strcpy(char *dest, char *src)
{
int i;
i = 0;
if (dest == NULL)
return (NULL);
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
