#include "main.h"
/**
 * print_sign - function to print sign
 * @n: number
 * Return: 1 for positive 0 for zero - for negativ
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar ('+');
return (1);
}
else if (n == 0)
{
_putchar (48);
return ('0');
}
else if (n < 0)
{
_putchar ('-');
return (-1);
}
}
