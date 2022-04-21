#include<stdio.h>
#include<stdlib.h>
#include "lists.h"
/**
 * list_len - returns length of a list
 * @h: list
 * Return: what is returned
 */
size_t list_len(const list_t *h)
{
int n = 0;
while (h)
{
h = h->next;
n++;
}
return (n);
}
