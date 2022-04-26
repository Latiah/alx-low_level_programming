#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "lists.h"
/**
 * pop_listint - a function that deletes the head node
 * @head: list
 * Return: value returned
 */
int pop_listint(listint_t **head)
{
listint_t *prev;
int n;
if (head == NULL || *head == NULL)
return (0);
prev = *head;
*head = prev->next;
n = prev->n;
free(prev);
return (n);
}
