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
int i;
int *p;
if (min > max)
return (NULL);
p = malloc(max);
if (p == NULL)
return (NULL);
for (i = min; i <= max; i++)
p[i] = min;
return (p);
}