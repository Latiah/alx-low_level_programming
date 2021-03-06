#include "variadic_functions.h"
#include<stdio.h>
#include<string.h>
/**
 * print_strings - prints string passed in it
 * @separator:what is bewwen the strings
 * @n: argument
 * Return: what is returned
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *s;
va_list nums;
va_start(nums, n);
for (i = 0; i < n; i++)
{
s = va_arg(nums, char*);
if (s)
printf("%s", s);
else
printf("(nil)");
if (i < n - 1 && separator)
printf("%s", separator);
}
va_end(nums);
printf("\n");
}
