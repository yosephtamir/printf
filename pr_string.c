#include "main.h"

/**
 * pr_string - prints a string
 * @list: list of the string
 *
 * Return: length of the string
 */

int pr_string(va_list list)
{
	char *ptr;
	int len;

	ptr = va_arg(list, char*);
	len = print((ptr != NULL) ? ptr : "(null)");

	return (len);
}
