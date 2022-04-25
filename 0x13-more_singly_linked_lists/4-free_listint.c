#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "lists.h"
/**
 * free_listint - a function that frees a list
 * @head: list
 */
void free_listint(listint_t *head)
{
while (head != NULL)
free(head->n);
free(head->next);
free(head);
}
