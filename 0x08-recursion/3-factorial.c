#include "main.h"
#include<stdio.h>
/**
 * factorial -returns factorial of a given number
 * @n: a number
 * Return: value returned
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
