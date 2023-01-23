#include "main.h"

/**
 * _putchar - is a function used to print to the std out
 * @c: The ascii char
 * Return: On success 1 or -1 failurre
 */
int _putchar(char c)
{
	return (_write(c));
}

/**
 * _write - Save the character in a buffer
 * @c: ASCII char from putchar
 * Return: 1
 **/
int _write(char c)
{
	static char bufarg[1024];
	static int i;

	if (c == -1 || i == 1024)
	{
		write(1, bufarg, i);
		i = 0;
	}

	if (c != -1)
		bufarg[i++] = c;

	return (1);
}
