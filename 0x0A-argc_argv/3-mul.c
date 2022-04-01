#include<stdio.h>
#include<stdlib.h>
/**
 * main - starting of a program
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
unsigned long int multiple;
if (argc == 3)
{
multiple = atoi(argv[1]) * atoi(argv[2]);
printf("%lu\n", multiple);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
