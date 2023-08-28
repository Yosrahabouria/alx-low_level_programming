#include<stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * sum_listint - a function that  returns the sum of
 * all the data of a linked list
 * @head : input value
 * Return: the sum of data in
 * linked list,if empty return 0
*/
int sum_listint(listint_t *head)
{
	int s = 0;

	listint_t *k = head;

	while (k != NULL)
	{
		s+= k->n;
		k =k->n;
	}

	return (s);
}
