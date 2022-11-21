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
	int i, j, k, len, f;
	print	prt[] = {
		{"c", print_char}, {"s", print_string},	{NULL, NULL}};

	va_start(argm, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return(0);

		i = 0;
		len  = 0;
		while (format[i] != '\0')
		{
			if (format[i] == '%' && format[i + 1])
			{
				j = 0;
				f = 0;
				while (prt[j].prt != NULL)
				{
					k = 0;
					if (format[i + 1] == prt[j].prt[0])
					{
						k = prt[j].ptr(argm);
						i++;
						len = len + k;
						f = 1;
					}
					j++;
				}
			}
			if (f == 0)
			{
				_putchar(format[i]);
				len++;
			}
			else if(format[i] == '%' && format [i + 1] == '%')
			{
				_putchar('%');
				i++;
				len++;
			}
			else
			{
				_putchar(format[i]);
				len++;
			}
			i++;
		}
		va_end(argm);
return(len);
}
