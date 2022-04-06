#include "main.h"
#include<string.h>
#include<stdlib.h>
/**
 * _calloc -that allocates memory for an array
 * @nmemb:elements of an array
 * @size: size of bytes
 * Return: what is returned
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *pointer;
unsigned int i;
if (nmemb == 0 || size == 0)
return (NULL);
pointer = malloc(nmemb * size);
if (pointer == NULL)
return (NULL);
for (i = 0; i < (nmemb * size); i++)
pointer[i] = 0;
return (pointer);
}
