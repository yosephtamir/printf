#include "main.h"
  
/**
 * pr_octal - Print a number in hexadecimal
 * @list: list of number
 *
 * Return: Length
 */
int pr_octal(va_list list)
{
        char *ptr;
        int i;

        ptr = iconv(va_arg(list, unsigned int), 8);

        i = print((ptr != NULL) ? ptr : "NULL");

        return (i);
}
