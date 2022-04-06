#include "main.h"
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
/**
 * _realloc -rellocates memory
 * @ptr: pointer
 * @old_size: first size
 * @new_size: second size
 * Return: what is to be returned
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *p;
unsigned int i, new = new_size;
char *pointer = ptr;
if (ptr == NULL)
{
p = malloc(new_size);
return (p);
}
else if (new_size == 0)
{
free(ptr);
return (NULL);
else if (new_size == old_size)
return (ptr);
p = malloc(new_size);
if (p == NULL)
return (NULL);
if (new_size > old_size)
new = old_size;
for (i = 0; i < new; i++)
p[i] = pointer[i];
free(ptr);
return (ptr);
}
