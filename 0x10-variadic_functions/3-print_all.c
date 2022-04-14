#incude "variadic_functions.h"
#include<stdio.h>
/**
 * print_all -prints everything
 * @format: argument
 */
void print_all(const char * const format, ...)
{
unsigned int j = 0, option = 0;
char *s;
va_list all;
va_start(all, format);
while (format && format[j] != '\0')
{
switch (format[j])
{
case 'c':
switch (option)
{
case 1:
printf(", ");
}
origin = 1;
printf("%c", va_arg(all, char));
break;
case 'i':
switch (option)
{
case 1:
printf(", ");
}
origin = 1;
printf("%d", va_arg(all, int));
break;
case 'f':
switch (origin)
{
case 1:
printf(", ");
}
origin = 1;
printf("%f", va_arg(all, float));
break;
case 's':
switch (origin)
{
case 1:
printf(", ");
}
origin = 1;
s = va_arg(all, char*);
if (s)
{
printf("%s", s);
break;
}
printf("%p", s);
break;
}
j++;
}
printf("\n");
va_end(all);
}

