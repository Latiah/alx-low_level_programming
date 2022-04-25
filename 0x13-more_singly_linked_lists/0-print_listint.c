#include<stdio.h>
#include<stdlib.h>
#include "lists.h"
/**
 *print_listint - afunction that will return elements of a list
 * @h: structure object
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
const listint_t *tmp;
unsigned int i;
tmp = h;
for (i = 0; tmp; i++)
{
printf("%d\n", tmp->n);
tmp = tmp->next;
}
return (i);
}
