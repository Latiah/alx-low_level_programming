#include "main.h"

/**
 * print_alphabet -a function used in this program
 * main - Entry point for this program
 * Return: Always 0 (success)
 */
void print_alphabet(void);
int main(void)
{
print_alphabet();
return (0);
}
void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar (letter);
}
putchar ('\n');
}
