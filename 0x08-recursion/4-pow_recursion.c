#include "main.h"
#include<stdlib.h>
#include<math.h>
#include<stdio.h>
/**
 * _pow_recursion -returns power
 * @x: base
 * @y: power
 * Return: result returned
 */
int _pow_recursion(int x, int y)
{
int power;
if (y < 0)
return (-1);
power = pow(x, y);
return (power);
}
