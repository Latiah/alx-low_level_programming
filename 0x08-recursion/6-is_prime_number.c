#include "main.h"
/**
 * prime -function that checks for prime no
 * @num: par 1
 * @p: par 2
 * Return: value returned
 */
int prime(int num, int p)
{
if (p < 2 || p % num == 0)
return (0);
if (num > p / 2)
return (1);
return (prime(num + 1, p));
}
/**
 * is_prime_number - states if number is prime
 * @n: number to check
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
if (n == 2)
return (1);
return (prime(2, n));
}
