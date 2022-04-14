#include "variadic_functions.h"
#include<stdio.h>
/**
 *sum_them_all - a variadic function that calculates sum
 * @n: first argument
 * Return: what is returned
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
va_start(ap, n);
int i = 0;
int sum = 0;
for (i = 0; i < n; i++)
sum += va_arg(ap, unsigned int);
return (sum);
va_end(ap);
}
