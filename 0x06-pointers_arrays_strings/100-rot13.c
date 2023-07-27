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
	char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char d[] = "KLMNOPQRSTUVWXYZABCDEFGHIJeftshjklmnpoxztyacdbnslmop";

	while (*(s + a) != '\0')
	{
	for (b = 0; b <= 51; b++)
	{
		for (b = 0; b <= 16; b++)
		{
			if (*(s + a) == c[b])
			{
				(*(s + a) == d[b]);
				break;
			}
		}
		a++;
		}
		return (s);
	}
