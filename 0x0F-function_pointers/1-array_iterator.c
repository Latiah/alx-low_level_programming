#include "function_pointers.h"
#include<stdio.h>
#include<string.h>
/**
 * array_iterator -function that deal with arrays
 * @array: array name
 * @size: size of an array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
size_t i;
if (size != NULL && action != NULL)
{  
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
