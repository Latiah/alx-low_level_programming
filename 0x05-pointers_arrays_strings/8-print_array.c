#include "main.h"
#include<stdio.h>
/**
 * print_array - printing array elements
 * @a: pointer
 * @n: number of elements of the array
 */
void print_array(int *a, int n)
{
int i;
int var[n];
for (i = 0; i < n; i++)
{
a[i] = &var[i];
}
for (i = 0; i < n; i++)
{
printf("%d, ", *a[i]);
}
}
