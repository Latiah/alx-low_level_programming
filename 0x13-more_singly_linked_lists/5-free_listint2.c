#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "lists.h"
/**
 * free_listint2 - function that frees a list
 * @head: structur object
 * Return: what is returned
 */
void free_listint2(listint_t **head)
{
listint_t *remove;
if (head == NULL && *head == NULL)
return;
while (*head != NULL)
{
remove = *head;
*head = (*(head))->next;
free((*(head))->next);
free(remove);
}
*head = NULL;
}
