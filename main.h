#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/* utils.c */
int _strlen(const char *);
int print(char *);
char *iconv(long int, int);

/* printf.c */
int _printf(const char *, ...);

/* flags.c */
int flags (const char *, va_list);
int per_flags(const char *, va_list, int *);

/* printers */
int pr_string(va_list);
int pr_char(va_list);
int pr_integer(va_list);
int pr_binary(va_list);
/*int pr_rot(va_list);*/
int pr_unsigned(va_list);
int pr_octal(va_list);
int pr_hexl(va_list);
int pr_hexh(va_list);
int pr_pointer(va_list);
/*int pr_rev_string(va_list);
*/
/* _putchar.c */
int _putchar(char);
int _write(char);

/**
 * _format - Typedef struct
 *
 * @type: flags
 * @f: The function associated
 **/
typedef struct _format
{
	char type;
	int (*f)(va_list);
} format;


#endif

