#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * set_bit - a function that sets the value of a bit
 * @index : input value
 * @n : input value
 * Return: 1 if it worked, or -1 if an error occurred
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n = ((1 << index) | *n);

	return (1);
}
