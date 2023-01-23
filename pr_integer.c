#include "main.h"

/**
 * pr_integer - Print a number in decimal
 * @list: List of decimal
 *
 * Return: Length of the numbers in decimal
 **/
int pr_integer(va_list list)
{
	char *ptr;
	int i;

	ptr = iconv(va_arg(list, int), 10);

	i = print((ptr != NULL) ? ptr : "NULL");

	return (i);
}
