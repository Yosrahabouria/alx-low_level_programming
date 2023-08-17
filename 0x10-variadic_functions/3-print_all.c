#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - a function that print anything
 * @format : input value
*/
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep = "";
	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			swi
