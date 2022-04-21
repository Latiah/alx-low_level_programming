#include<stdio.h>
#include<stdlib.h>
#include "lists.h"
/**
 * free_list - frees a list
 * @head: a list
 */
void free_list(list_t *head)
{
if (head != NULL)
free(head);
}
