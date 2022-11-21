#include "main.h"
#include <stdarg.h>
#include <stddef.h>
/**
 * _printf - function printing.
 * @format: const char.
 * Return: integer the numbers of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list argm;
	int i, j, k, len;
	print	prt[]={
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL}
		};

	va_start(argm, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return(0);
	else
	{
		i = 0;
		len  = 0;
		while (format[i] != '\0')
		{
			if (format[i] == '%' && format[i + 1] == '%')
			{
				_putchar('%');
				len++;
			}
			else if (format[i] == '%' && format[i + 1])
			{
				j = 0;
				while (prt[j].prt != NULL)
				{
					k = 0;
					if (format[i + 1] == prt[j].ptr(argm))
					{
						k = prt[j].ptr(argm);
						i++;
						len = len + k;
					}
					j++;
				}
			}
			else
			{
				_putchar(format[i]);
				len++;
			}
			i++;
		}
		va_end(argm);
	}
return(len);
}
