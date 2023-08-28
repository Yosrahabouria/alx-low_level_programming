#include<stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * pop_listint - a function that delete the head
 * of a node in the list
 * @head : input value
 * Return: if the linked list is empty return 0
*/
int pop_listint(listint_t **head)
{
	listint_t *k = *head;

	int i = (*head)->n;

	if (*head == NULL)
	{
		return (0);
	}

	*head = (*head)->next;
	free(k);

	return (i);
}
