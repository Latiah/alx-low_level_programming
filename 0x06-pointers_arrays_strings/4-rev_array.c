#include<stdio.h>
#include "main.h"
/**
 * reverse_array -for reversing elements of an array
 * @a: array name
 * @n: elements of an array
 */
void reverse_array(int *a, int n)
{
while (n > 0)
{
--n;
if (n == 0)
{
printf("%d", a[n]);
}
else
{
printf("%d, ", a[n]);
}
}
printf("\n");
}
