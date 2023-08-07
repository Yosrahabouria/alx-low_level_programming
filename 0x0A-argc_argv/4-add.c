#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"
/**
 * check_num - check if digit
 * @str : array
 * Return:always 0 (success)
*/
int check_num(char *str)
{
	unsigned int count;

count = 0;
while (count < strlen(str))
{
	if (isdigit(str[count])

			{
			
			return (0);
			
			}

			count++;
			}
			return (1);
			
			}

			/**
 * main- print the name of a program
 * @agrc: number of arguments
 * @agrv: array of arguments
 * Return:always 0 (success)
*/
