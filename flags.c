#include "main.h"

/**
 * flags - handles flag
 * @str: String format
 * @list: List of arguments
 *
 * Return: Total size of arguments with the total size of the base string
 **/
int flags(const char *str, va_list list)
{
	int i, j, k;

	j = 0;
	for (i = 0; str[i] != 0; i++)
	{
		if (str[i] == '%')
		{
			k = per_flags(str, list, &i);
			if (k == -1)
				return (-1);

			j += k;
			continue;
		}

		_putchar(str[i]);
		j = j + 1;
	}


	return (j);
}

/**
 * per_flags - handles percent format
 * @str: String format
 * @list: List of arguments
 * @i: is iteration pointer
 * Return: Size of the numbers of elements printed
 **/
int per_flags(const char *str, va_list list, int *i)
{
	int k, j, numb;
	format ops[] = {
		{'s', pr_string}, {'c', pr_char},
		{'d', pr_integer}, {'i', pr_integer},
		{'b', pr_binary}, {'u', pr_unsigned},
		{'o', pr_octal}, {'x', pr_hexl},
		{'X', pr_hexh}
	};

	*i = *i + 1;

	if (str[*i] == '\0')
		return (-1);

	if (str[*i] == '%')
	{
		_putchar('%');
		return (1);
	}

	numb = sizeof(ops) / sizeof(ops[0]);
	for (k = j = 0; j < numb; j++)
	{
		if (str[*i] == ops[j].type)
		{
			k = ops[j].f(list);
			return (k);
		}

	}

	_putchar('%'), _putchar(str[*i]);

	return (2);
}
