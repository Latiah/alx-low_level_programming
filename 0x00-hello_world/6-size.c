#include<stdio.h>

/**
 * main -Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
int a;
char d;
long int e;
long long int s;
float f;
printf("size of a char:%lu byte(s)\n", (unsigned long)sizeof(d));
printf("size of an int:%lu byte(s)\n", (unsigned long)sizeof(a));
printf("size of a long int:%lu byte(s)\n", (unsigned long)sizeof(e));
printf("size of a long long int:%lu byte(s)\n", (unsigned long)sizeof(s));
printf("size of a float:%lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
