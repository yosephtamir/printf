#include "main.h"

/**
 * _case - is used to chck the case
 * @c: the character passed
 * Return: case
 */

int _case(char c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * strup - is used to convert the lowercase to upper case
 * @s: the character passed to it
 * Return: s
 */


char *strup(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (_case(s[i]))
		{
			s[i] = s[i] - 32;
		}
	}

	return (s);
}

/**
 * pr_hexl - Print a number in hexadecimal
 * @list: list of number
 *
 * Return: Length
 */

int pr_hexh(va_list list)
{
        char *ptr;
        int i;

        ptr = iconv(va_arg(list, unsigned int), 16);
	ptr = strup(ptr);

        i = print((ptr != NULL) ? ptr : "NULL");

        return (i);
}
