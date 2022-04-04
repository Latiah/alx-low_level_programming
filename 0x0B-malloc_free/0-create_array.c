#include<stdio.h>
#include "main.h"
#include<stdlib.h>
/**
 * create_array -function that creates an array
 * @size: size of our array
 * @c: array
 * Return: what is returned
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *arr;
arr = malloc(sizeof(char) * size);
if (arr == NULL || size == 0)
return (NULL);
for (i = 0; i < size; i++)
*(arr + i) = c;
return (arr);  
}
