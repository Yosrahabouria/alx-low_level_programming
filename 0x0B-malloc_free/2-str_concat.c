#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * str_concat - a function that concatenates two strings
 * @s1 : input value
 * @s2 : input value
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = c = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[c] != '\0')
		c++;
	concat = malloc(sizeof(char) * (i + c + 1));
	if (concat == NULL)
		return (NULL);
	i = c = 0;
	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
	i++;
	}
	while (s2[c] != '\0')
	{	       concat[i] = s2[c];
i++;
c++;
	}
	concat[i] = '\0';
	return (concat);
}
