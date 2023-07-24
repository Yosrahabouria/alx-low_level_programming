#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_rev- print string in reverse
 * Return:always 0 (success)
 * @s : the input char
*/

void print_rev(char *s)
{
int a, b, c;

a = 0;

while (s[a] != '0')
{
{
	a++;
}

c = a;

for (b = c - 1; b >= 0; b--)
{
	putchar(s[b]);
}
}

putchar('\n');
}
