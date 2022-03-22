#include<stdio.h>
#include<stdlib.h>
#include<time>
/**
 * main -starting point
 * Return: the value tobe returned
 */
int main(void)
{
srand(time(0));
for (x = 1; x < 25; x++)
{
printf(rand());
}
return (0);
}
