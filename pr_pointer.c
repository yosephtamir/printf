#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Compare two strings
 * @s1: String 1
 * @s2: String 2
 * Return: Integer
 **/
int _strcmp(char *s1, char *s2)
{
        int i;

        for (i = 0; s1[i] != '\0'; i++)
        {
                if (s1[i] != s2[i])
                        return (s1[i] - s2[i]);
        }

        return (0);
}


/**
 * print_pointer - Print an adress in hexadecimal format
 * @list: adress of a memory to be printed
 *
 * Return: Length
 **/
int pr_pointer(va_list list)
{
	char *ptr;
	int i;

	ptr = iconv(va_arg(list, unsigned long int), 16);

	if (!_strcmp(ptr, "0"))
		return (print("(nil)"));

	i = print("0x");

	if (!_strcmp(ptr, "-1"))
		i += print("ffffffffffffffff");
	else
		i+= print(ptr);

	return (i);
}
