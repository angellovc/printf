#include "holberton.h"
/**
 * errors - check for errors in _printf function
 * @format: string to check
 * Return: positive number if no erros occur, and negative otherwise
 */
int errors(const char *s, int i)
{
	char *c;

	c = s[i + 1];
	if (s[i] == '%' && (c == ' ' || c == '\0')
	    return (-1);
}
