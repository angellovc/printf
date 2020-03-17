#include "holberton.h"
/**
 *convert_char - store list argumets into a char
 *@list: arguments
 *Return: lengh of the printed string
 *
 */
int convert_char(va_list list)
{
	char c;
	int len = 0;

	c = va_arg(list, int);
	len = print_char(c);
	return (len);
}
/**
 *convert_string - store list argumets into a string
 *@list: arguments
 *Return: lengh of the string printed
 *
 */
int convert_string(va_list list)
{
	char *s;
	int len = 0;

	s = va_arg(list, char *);
	if (s != '\0')
		len = print_string(s);
	else
	{
		s = "(null)";
		len = print_string(s);
	}
	return (len);
}
