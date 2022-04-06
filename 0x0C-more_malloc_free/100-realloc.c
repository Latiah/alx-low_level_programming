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
ptr = malloc(old_size);
if (new_size == old_size)
return (ptr);
if (new_size > old_size || ptr == NULL)
ptr = malloc(new_size);
if (new_size == 0 && ptr != NULL)
free(ptr);
return (ptr);
}
