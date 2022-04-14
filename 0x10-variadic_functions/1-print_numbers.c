#include "variadic_functions.h"
#include<stdio.h>
/**
 * print_numbers - a function that prints numbers
 * @separator: strings between numbers
 * @n: numbers
 * Return: what is returned
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
int numbers;
va_list nums;
va_start(nums, n);
for (i = 0; i < n; i++)
{
numbers = va_arg(nums, unsigned int);
printf("%d", numbers);
if (i < n - 1 && separator)
printf("%s", separator);
}
va_end(nums);
printf("\n");
}
