#include "main.h"
/**
 * sqroot - find square root
 * @num: number entered
 * @res: result
 * Return: what to return
 */
int sqroot(int num, int res)
{
if (num * num == res)
return (num);
if (num * num < 0)
return (-1);
return (sqroot(num + 1, res));
}
/**
 * _sqrt_recursion - returns square root of a number
 * @n: number
 * Return: value returned
 */
int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
if (n < 0)
return (-1);
return (sqroot(1, n));
}
