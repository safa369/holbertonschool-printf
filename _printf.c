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
	int i ,j ,len ,f;
	print	prt[] = {
		{"c", print_char}, {"s", print_string},	{NULL, NULL}};

	va_start(argm, format);
	if ((format[0] == '%' && format[1] == '\0') || format == NULL)
		return (0);
	i = j = len = 0;
	while (format[i] != '\0')
		{
			if (format[i] == '%' && format[i + 1] != '%' && format[i + 1] != '\0')
			{
				f = 0;
				while (prt[j].prt != NULL)
				{
					if (format[i + 1] == prt[j].prt[0])
					{
						len = len + prt[j].ptr(argm);
						i = i + 2;
						f = 1;
					}
					j++;
				}
			}
			else if (format[i] == '%' && format[i + 1] == '%' && f == 0)
			{
				_putchar('%');
				i++;
				len = len + 1;
			}
		}
		va_end(argm);
return (len);
}
