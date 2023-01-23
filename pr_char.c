#include "main.h"
/**
 * pr_char - prints a character.
 * @list: list of the character
 *
 * Return: 1
 */
int pr_char(va_list list)
{
	int i;

	i = va_arg(list, int);

	_putchar(i);

	return (1);
}
