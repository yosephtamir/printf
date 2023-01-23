#include "main.h"

/**
 * pr_hexl - Print a number in hexadecimal
 * @list: list of number
 *
 * Return: Length
 */
int pr_hexl(va_list list)
{
	char *ptr;
	int i;

	ptr = iconv(va_arg(list, unsigned int), 16);

	i = print((ptr != NULL) ? ptr : "NULL");

	return (i);
}
