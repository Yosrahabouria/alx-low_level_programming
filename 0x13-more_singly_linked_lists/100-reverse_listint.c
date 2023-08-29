#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * reverse_listint - a function that reverse a linked list
 * @head : input value
 * Return: a pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *av = NULL;
	listint_t *ap = NULL;

	ap = (*head)->ap;
	(*head)->ap = av;
	av = *head;
	*head = ap;
}
*head = av;

return (*head);
}
