#include<stdlib.h>
#include<stdio.h>
/**
 * main -a starting of point
 * @argc: argument count
 * @argv: argument vector
 * Return: a value returned
 */
int main(int argc, char *argv[])
{
int i;
argv[0] = " program name";
i = argc -  1;
printf("%d\n", i);
return (0);
}
