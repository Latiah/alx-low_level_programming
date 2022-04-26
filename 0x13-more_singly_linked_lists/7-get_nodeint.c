#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node
 * @head: list
 * @index: index
 * return: value returned
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *current = head;
int count = 0;
while (current != NULL)
{
if (count == index)
return (current->n);
count++;
current = current->next;
}
return (0);
}
