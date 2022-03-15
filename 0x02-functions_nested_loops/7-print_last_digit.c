#include "main.h"
/**
 * print_last_digit - computes the absolute value of an integer
 * @n: the int to check
 * Return: the absolute value of int
 */
int print_last_digit(int n)
{
int c;
if (n < 0)
n = -n;
c = n % 10;
if (c < 0)
c = -c;
_putchar (c + '0');
return (c);
}

