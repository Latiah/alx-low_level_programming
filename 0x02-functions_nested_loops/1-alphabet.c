#include<stdio.h>
#include "main.h"

/**
 * main - entry
 * print_alphabet -function name
 * Return: Always 0 (success)
 *
 * print_alphabet - a function  with no return type and arguments
 */
void print_alphabet(void);
int main(void)
{
print_alphabet();
return (0);
}
void print_alphabet(void) /* print_alphabet - function definition */
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar (letter);
}
putchar ('\n');
}
