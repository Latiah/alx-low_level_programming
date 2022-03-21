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
for (i = 0; i < n; i++)
{
printf("%d, ", *(a + i));
}
printf("\n");
}
