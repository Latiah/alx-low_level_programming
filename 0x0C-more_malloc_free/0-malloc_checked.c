#include "main.h"
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
/**
 * malloc_checked -a function that allocates memory using malloc
 * @b:size of memory needed
 * Return: returned
 */
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}
