#include<stdio.h>
#include "main.h"
/**
 * reverse_array -for reversing elements of an array
 * @a: array name
 * @n: elements of an array
 */
void reverse_array(int *a, int n)
{
int c, t;
for (c = 0; c < n / 2; c++)
{
t = a[c];
a[c] = a[n - c - 1];
a[n - c - 1] = t;
}
}
