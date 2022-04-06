#include "main.h"
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
/**
 * malloc_checked -a function that allocates memory using malloc
 * @b:size of memory needed
 */
void malloc_checked(unsigned int b)
{
int *ptr;
ptr = (int *)malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}
