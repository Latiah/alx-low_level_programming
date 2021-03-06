#include "main.h"
/**
 * length -length of a string
 * @st: string
 * Return:what is returned
 */
int length(char *st)
{
if (*st == '\0')
return (0);
else
return (1 + length(st + 1));
}
/**
 * check_palindrome - checking if string is palindrome
 * @f:first character
 * @l:last character
 * @k: string
 * Return: value returned
 */
int check_palindrome(int f, int l, char *k)
{
if (f >= l)
return (1);
else if (k[f] != k[l])
return (0);
else
return (check_palindrome(f + 1, l - 1, k));
}
/**
 * is_palindrome -states that string is palindrome
 * @s:string
 * Return: what is returned
 */
int is_palindrome(char *s)
{
int i;
i = length(s) - 1;
return (check_palindrome(0, i, s));
}
