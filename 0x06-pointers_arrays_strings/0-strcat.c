#include "main.h"
/**
 * _strcat - for appending  a string to another
 * @dest: first string
 * @src: second string
 * Return: value returned
 */
char *_strcat(char *dest, char *src)
{
while (*dest)
dest++;
while (*src)
{
*dest = *src;
src++;
dest++;
}
*dest = '\0';
return (dest);
}
