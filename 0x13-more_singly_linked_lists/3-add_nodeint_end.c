#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "lists.h"
/**
 * add_nodeint_end - a function that adds a tail to a list
 * @head: first node
 * @n: integer
 * Return: what is returned
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newnode;
listint_t *last;
newnode = malloc(sizeof(listint_t));
if (newnode == NULL)
return (NULL);
newnode->n = n;
newnode->next = NULL;
if (*head == NULL)
{
*head = newnode;
return (newnode);
}
last = *head;
while (last->next != NULL)
last = last->next;
last->next = newnode;
return (newnode);
}
