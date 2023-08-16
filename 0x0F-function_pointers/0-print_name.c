#include <stdio.h>
#include <string.h>
#include "function_pointers.h"
/**
 * print_name - a function that prints name
 * @name: input value
 * @f: a pointer
 * Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
	if
	   (name == NULL || f == NULL)
			return;

		f(name);

}
