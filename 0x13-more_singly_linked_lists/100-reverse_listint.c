#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "lists.h"
/**
 * reverse_listint - a function that reverses a list
 * @head: list
 * Return: value returned
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *current = *head;
listint_t *next = NULL;
while (current != NULL)
{
next = current->next;
current->next = prev;
prev = current;
current = next;
}
*head = prev;
}
