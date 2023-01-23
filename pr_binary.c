#include "main.h"

/**
 * pr_binary - Print a number in binary
 * @list: List of number
 *
 * Return: Length
 */
int pr_binary(va_list list)
{
	char *ptr;
	int i;

	ptr = iconv(va_arg(list, unsigned int), 2);

	i = print(ptr);

	return (i);
}
