#include<stdio.h>
#include<stdlib.h>
/**
 * main -start of a program
 * @argc: argument count
 * @argv: argument vector
 * Return: returned value
 */
int main(int argc, char *argv[])
{
int multiple;
if (argc == 3)
mulitple = atoi(argv[1]) * atoi(argv[2]);
printf("%d", multiple);
else
printf("Error\n");
exit(98);
return (0);
}
