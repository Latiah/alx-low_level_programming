#include "function_pointers.h"
#include<stdio.h>
/**
 * print_name - afunction that print a name
 * @name: name entered
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
if(name)
{
(*f)(name);
}
}
