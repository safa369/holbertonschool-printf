#include "main.h"
#include <stdio.h>
/**
 * _printf - function print to standard output.
 * @format: string to print it.
 * Return: the number of char to print it.
*/
int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	va_list argmt;

	va_start(argmt, format);
	if ((format == NULL) || (format[i] == '%' && !format[i + 1]))
	{
		return (-1);
	}
	while (format && format[i])
	{
		if (format[i] == '%')
		{
				count += get_function(&i, format, argmt);
		}
		else
		{
			putchar(format[i]);
			count++;
		}
		i++;
	}
va_end(argmt);
return (count);
}
