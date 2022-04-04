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
char *dest = malloc(strlen(str) + 1);
if (dest == NULL)
return (NULL);
strcpy(dest, str);
return (dest);
}
