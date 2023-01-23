#include "main.h"
  
/**
 * pr_unsigned - Print a number in hexadecimal
 * @list: list of number
 *
 * Return: Length
 */
int pr_unsigned(va_list list)
{
        char *ptr;
        int i;

        ptr = iconv(va_arg(list, unsigned int), 10);

        i = print((ptr != NULL) ? ptr : "NULL");

        return (i);
}
