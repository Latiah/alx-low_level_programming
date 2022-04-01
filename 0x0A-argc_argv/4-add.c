#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
/**
 * main - starting of a program
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
int sum = 0;
int i;
for (i = 1; i < argc; i++)
{
if (isdigit(argv[i] != 0))
{
printf("Error\n");
return (1);
break;
}
else
{
sum += atoi(argv[i]);
}
}
printf("%d\n", sum);
return (0);
}
