#include "main.h"
/**
 * _strchr - finding a character in a string
 * @s: string
 * @c: character to find
 * Return: what is returned
 */
char *_strchr(char *s, char c)
{
while (*s)
{
if (c == *s)
{
return (s);
}
s++;
}
if (!c)
return (s);
return (NULL);
}
