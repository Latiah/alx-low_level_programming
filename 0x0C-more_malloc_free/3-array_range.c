#include "main.h"
#include<stdlib.h>
#include<string.h>
/**
 * array_range -creating an array
 * @min:staring value
 * @max: ending value
 * Return: what is returned
 */
int *array_range(int min, int max)
{
int n;
int i;
int *p;
if (min > max)
return (NULL);
n = max - min + 1;
p = malloc(sizeof(int) * n);
if (p == NULL)
return (NULL);
for (i = 0; i < n; i++, min++)
{
p[i] = min;
}
return (p);
}
