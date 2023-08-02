#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of string
 * @s : input value
 * Return: always 0 (success)
*/
int _strlen_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		return (i);
	}
}
