#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "lists.h"
/**
 * print_list - function that prints elements of a list
 * @h:elements
 * Return: what is returned
 */
size_t print_list(const list_t *h)
{
const list_t *temp;
unsigned int i;
temp = h;
for (i = 0; temp; i++)
{
printf("[%u] %s\n", temp->len, temp->str);
temp = temp->next;
}
return (i);
}
