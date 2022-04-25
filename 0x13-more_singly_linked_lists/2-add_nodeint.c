#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "lists.h"
/**
 * add_nodeint - a function that adds a node at the start of a list
 * @n: integer
 * @head: head node
 * Return: what is returned
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newnode;
newnode = malloc(sizeof(listint_t));
if (newnode == NULL)
return (NULL);
newnode->n = n;
newnode->next = *head;
*head = newnode;
return (*head);
}
