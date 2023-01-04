#include "main.h"
/**
 * print_integer - function that print an integer.
 * @argmt: integer;
 * Return: the umber of char printed.
*/
int print_integer(va_list argmt)
{
    unsigned int i, j, k;
    int count = 0, val;

    val = va_arg(argmt, int);
    if (val < 0)
    {
        _putchar('-');
        count++;
        i = val * -1;
    }
    else
    {
        i = val;
    }
    j = 1;
    k = i;
    while (k > 9)
    {
        j *= 10;
        k /= 10;
    }
    for(; j >= 1; j /= 10)
    {
        _putchar(((i / j) % 10) + '\0');
        count++;
    }
    return (count);
}