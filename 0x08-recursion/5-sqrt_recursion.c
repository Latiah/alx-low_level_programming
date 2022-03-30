#include "main.h"
#include<math.h>
/**
 * _sqrt_recursion - returns square root of a number
 * @n: number
 * Return: value returned
 */
int _sqrt_recursion(int n)
{
int result;
if (n < 0)
return (-1);
result = sqrt(n);
return (result);
}
