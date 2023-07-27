#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * rot13 - encoder rot 13
 * @s: pointer to string params
 * Return: *s
*/
char *rot13(char *s)
{
	int a;
	int b;
	char c[] = 'ABCDEFGHIJKLMNOP';
	char d[] = 'KLMNOPQRSTUVWXYZ';

	for (a = 0; s[i] != '\0'; i++)
	{
		for (b = 0; b <= 16; b++)
		{
			if (s[a] == c[b])
			{
				s[a] == d[b];
				break;
			}
		}
		return (s);
	}
