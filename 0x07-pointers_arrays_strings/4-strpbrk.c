#include "main.h"
#include<string.h>
/**
 * _strpbrk - function that locates a character in a string
 * @s: string
 * @accept: substring
 * Return: what is returned
 */
char *_strpbrk(char *s, char *accept)
{
if ((s == NULL) || (accept == NULL))
return (NULL);
while (*s)
{
if (strchr(accept, *s))
{
return (s);
}
else
{
s++;
}
}
return (NULL);
}
