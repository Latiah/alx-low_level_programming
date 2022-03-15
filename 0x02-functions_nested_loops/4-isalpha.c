#include "main.h"
/**
 * _isalpha -function for checking alphabets
 * @c: letter to be checked
 * Return: 1 for lower or upper 0 for otherwise
 */
int _isalpha(int c)
{
return (c >= 'a' && c <= 'z' ||  c >= 'A' && c <= 'Z');
}
