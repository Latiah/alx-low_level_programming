#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node
 * @head: list
 * @index: index
 * Return: value returned
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count = 0;
while (i < index)
{
if (head->next == NULL)
return (NULL);
head = head->next;
count++;
}
return (head);
}
