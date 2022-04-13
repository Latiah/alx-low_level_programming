#include "function_pointers.h"
#include<stdio.h>
#include<string.h>
/**
 * print_name - afunction that print a name
 * @name: name entered
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
