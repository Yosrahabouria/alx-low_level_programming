#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * sum_them_all -  a function that copy memory area
 * @n : input value
 * @... : input value
 * Return: if n == 0-0
 * otherwise-the sum of all parametrs
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
