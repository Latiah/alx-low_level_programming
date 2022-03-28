#include "main.h"
#include <string.h>
/**
 * _strspn -length of a prefix substring
 * @s: initial segment
 * @accept: substring
 * Return: what is to be returned
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int len = 0;
if ((s == NULL) || (accept == NULL))
return (len);
while (*s && strchr(accept, *s++))
{
len++;
}
return (len);
}
