#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * int _strcmp -compares two strings
 * Return: s1[j] - s2[j]
 * @s1 : input string
 * @s2 : input string
*/
int _strcmp(char *s1, char *s2)
{
	int j;

	j = 0;
      while (s1[j] != '\0' && s2[j] != '\0')
	{
		if (s1[j] != s2[j])
		{
			return (s1[j] - s2[j]);
		}
		j++;
	}
		return (0);
}
