#include "main.h"
#include<ctype.h>
/**
 * _isdigit - for checking digits
 * @c: number to be checked
 * Return: 1 for digit 0 for otherwise
 */
int _isdigit(int c)
{
if (isdigit(c))
{
return (1);
}
else
{
return (0);
}
}
