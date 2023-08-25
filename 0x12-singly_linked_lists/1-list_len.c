#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * list_len - a function that  returns the number of
 * elements in a linked list
 * @h : input value
 * Return: number of elements
*/
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h->next;
	}
	return (n);
}
