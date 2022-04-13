#include "function_pointers"
/**
 * int_index - a function that returns index of first number
 * @array: array name
 * @size: size of array
 * @cmp: function pointer
 * Return: what is returned
 */
int int_index(int *array, int size, int (*cmp)(int)))
{
int i, a;
if (size > 0 && array && cmp)
{
for (i = 0; i < size; i++)
{
a = cmp(array[i]);
if (a)
break;
}
if (i < size)
return (i);
}
return (-1);
}
