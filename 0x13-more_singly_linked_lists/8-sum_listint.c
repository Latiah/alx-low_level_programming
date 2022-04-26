#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "lists.h"
/**
 * sum_listint - function that returns the sum
 * @head: list
 * Return: value returned
 */
int sum_listint(listint_t *head)
{
listint_t *ptr = head;
int sum = 0;
while (ptr != NULL)
{
sum += ptr->n;
ptr = ptr->next;
}
return (sum);
}
