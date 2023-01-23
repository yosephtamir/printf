#include "main.h"

/**
 * _printf - Prints output to the std output
 * @format: Is a flag
 *
 * Return: character excluding NULL
 **/
int _printf(const char *format, ...)
{
	int size;
	va_list args;

	if (format == NULL)
		return (-1);

	size = _strlen(format);
	if (size <= 0)
		return (0);

	va_start(args, format);
	size = flags(format, args);

	_putchar(-1);
	va_end(args);

	return (size);
}
