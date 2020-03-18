#include "holberton.h"
#include <stdlib.h>
/**
 *convert_integer - store list arguments into a int variable
 *@list: arguments
 *Return: lenght of the integer
 */
int convert_integer(va_list list)
{
	int n = 0, len = 0;

	n = va_arg(list, int);
	len = print_integer(n);
	return (len);
}
/**
 *convert_double - store list arguments into a int variable
 *@list: arguments
 *Return: lenght of the integer
 */
int convert_double(va_list list)
{
	long int n = 0;
	int len = 0;

	n = va_arg(list, int);
	len = print_double(n);
	return (len);
}
/**
 *convert_unsig - store list arguments into a int variable
 *@list: arguments
 *Return: lenght of the integer
 */
int convert_unsig(va_list list)
{
	unsigned int n = 0;
	int len = 0;

	n = va_arg(list, unsigned int);
	len = print_unsig(n);
	return (len);
}
/**
 * convert_binary - convert form decimal to binary
 * @list: decimal number
 * Return: Always 0
 */
int convert_binary(va_list list)
{
	int res, i = 0, dec, dec2, lg = 0;
	char *p;

	dec = va_arg(list, int);
	dec2 = dec;
	while (dec2 != 0)
	{
		dec2 = dec2 / 2;
		lg++;
	}
	p = malloc(lg + 1);
	while (dec != 0)
	{
		res = (dec % 2);
		p[i] = res + '0';
		dec = dec / 2;
		i++;
	}
	rev_string(p);
	print_string(p);
	free(p);
	return (i);
}
