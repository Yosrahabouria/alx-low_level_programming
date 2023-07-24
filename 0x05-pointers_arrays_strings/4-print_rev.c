#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_rev - print string in reverse
 * Return:always 0 (success)
 * @s : the input char
*/
void print_rev(char *s)
{
int len;
int i;
len = 0;

while (*s != '\0')
{
	 len++;
	 s++;
}

s--;

for (i = len; i >= 0; i--)
{
	 putchar(*s);
		 s--;
}
putchar('\n');
}
