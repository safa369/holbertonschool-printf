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
	int len, i;

	va_start(argm, format);
	if ((format[0] == '%' && format[1] == '\0') || format == NULL)
		return (0);
	i = len = 0
	while (format[i] != '\0')
		{
			while (format[i] != '%')
			{
				_putchar(format[i]);
				i++;
				len++;
			}
			i++;
			switch(format[i])
			{
			case '%': _putchar('%');
				  len++;
				  break;
			case 's':len += print_string(argm);
				 break;
			case 'c':
				 len += print_char(argm);
				 break;
			}
			i++;
		}
		va_end(argm);
return (len);
}
