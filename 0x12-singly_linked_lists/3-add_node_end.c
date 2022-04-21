#include<stdio.h>
#include<stdlib.h>
#include "lists.h"
#include<string.h>
/**
 * add_node_end - adds node at the beginning of a list
 * @head: node at the beginning of a list
 * @str: string
 * Return: what is returned
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
list_t *last = *head;
unsigned int len = 0;
while (str[len])
len++;
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
new_node->str = strdup(str);
new_node->len = len;
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
}
while (last->next != NULL)
last = last->next;
last->next = new_node;
return (last);
}
