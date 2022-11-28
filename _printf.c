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
	int len, i, j;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(argm, format);
	i = len = 0;
	while (format[i] && format)
		{
			if (format[i] != '%' && format[i] != 'c' && format[i] != 's')
			{
				_putchar(format[i]);
				len++;
			}
			else if (format[i] == '%')
			{
				i++;
				j = get_function(format[i], argm);
				if (j != 0)
				{
					len = len + j;		
				}
				else if (format[i] == '\0')
				{
					_putchar(format[i]);
					len++;
					return (len);
				}
			}
				i++;
		}
		va_end(argm);
return (len);
}
