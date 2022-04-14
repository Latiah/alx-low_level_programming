#include "variadic_functions.h"
#include<stdio.h>
/**
 *sum_them_all - a variadic function that calculates sum
 * @n: first argument
 * Return: what is returned
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum = 0;
va_list ap;
va_start(ap, n);
for (i = 0; i < n; i++)
sum += va_arg(ap, unsigned int);
return (sum);
va_end(ap);
}
