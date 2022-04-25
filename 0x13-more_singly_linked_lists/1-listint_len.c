#include<stdio.h>
#include<stdlib.h>
#include "lists.h"
/**
 * listint_len - a function that returns the number of elements
 * @h:structure object
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
unsigned int i;
while (*h)
{
h = h->next;
i++;
}
return (i);
}
