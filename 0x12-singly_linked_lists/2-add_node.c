#include<stdio.h>
#include<stdlib.h>
#include "lists.h"
#include<string.h>
/**
 * add_node - adds node at the beginning of a list
 * @head: node at the beginning of a list
 * @str: string
 * Return: what is returned
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node = (list_t *) malloc(sizeof(list_t));
new_node->str = str;
new_node->next = (*head);
(*head) = new_node;
return (new_node);
}
