#include<stdio.h>
#include "main.h"
/**
 * print_binary - a function that represents a binary representation of a num
 * @n: number
 * Return: what is returned
 */
void print_binary(unsigned long int n)
{
if (n > 1)
print_binary(n >> 1);
printf("%ld", n & 1);
}
