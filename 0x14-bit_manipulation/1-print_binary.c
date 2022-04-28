#include<stdio.h>
#include "main.h"
/**
 * print_binary - a function that represents a binary representation of a num
 * @n: number
 * Return: what is returned
 */
void print_binary(unsigned long int n)
{
int i, conv;
if (n == 0)
_putchar('0');
for (conv = 0, i = sizeof(n) * 8 - 1; i >= 0; i--)
{
if ((n >> i) & 1)
conv = 1;
if (conv == 1)
((n >> i) & 1) ? _putchar('1') : _putchar('0');
}
}
