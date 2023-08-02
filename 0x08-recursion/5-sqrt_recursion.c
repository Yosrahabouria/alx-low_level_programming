#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _sqrt_recursion - a function that returns the natural square of number
 * @n : input value
 * Return: the result of square root
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);
	return (actual__sqrt_recursion(n, 0));
			}
			/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n : number to calculate the square root
 * @i : value
 * Return: the result of square root
*/
int actual_sqrt_recursion(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (actual_sqrt_recursion(n, i + 1));
		}
