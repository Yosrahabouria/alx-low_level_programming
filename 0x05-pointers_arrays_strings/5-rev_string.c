#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * rev_string - check the code
 * @s : string
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i;
	char k = s[0];
	int j = 0;

while (s[j] != '\0')
j++;
for (i = 0; i < j; i++)
{
	j--;
	k = s[i];
	s[i] = s[k];
	s[j] = k;
}
}

