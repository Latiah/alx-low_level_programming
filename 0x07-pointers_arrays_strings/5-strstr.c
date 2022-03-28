#include "main.h"
#include<string.h>
/**
 * _strstr -fuction that locates a substring
 * @haystack: first string
 * @needle: substring
 * Return: what is returned
 */
char *_strstr(char *haystack, char *needle)
{
static char *ptr;
ptr = haystack;
while (*ptr)
{
if (strncmp(ptr, needle, strlen(needle)) == 0)
return (ptr);
ptr++;
}
return (NULL);
}
