#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdlib.h>
/* printf function */
int _printf(const char *format, ...);

/* print ascii */
int print_char(char c);
int print_string(char *s);
/* print numbers */
int print_integer(int n);
int recursion_int(int n, int cont);
int print_double(double n);
int recursion_double(double n, int cont);

/* convert list to printeable ascii */
int convert_char(va_list list);
int convert_string(va_list list);
/* convert list to printeable numbers */
int convert_integer(va_list list);
int convert_double(va_list list);

int find(const char *data, va_list list);

/**
 *struct find - structure to find function related with data type
 *@type: datatype
 *@print: pointer to function
 *
 *Description: is used to translate data types
 */
typedef struct find
{
	char *type;
	int (*print)();
} struct_find;

#endif
