#include "main.h"
#include<string.h>
#include<stdio.h>
/**
 * _strcpy -this copies a string
 * @dest: a string
 * @src: another string
 * Return: string returned
 */
char *_strcpy(char *dest, char *src)
{
while (*src != '\0')
  *dest++ = *src++;
*dest = '\0';
return (*dest);
}
