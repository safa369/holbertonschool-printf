#ifndef print_f
#define print_f
#include <stdarg.h>
/**
 * struct printing - structur for compiling function.
 * @prt: structur.
 * @ptr: pointer function;
 */
typedef struct printing
{
	char *prt;
	int (*ptr)();
}print;
int _printf(const char *format, ...);
int print_char(va_list argm);
int print_string(va_list argm);
int _putchar(char c);
#endif
