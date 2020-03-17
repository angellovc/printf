#include "holberton.h"
/**
 *find - choose the function according to the *data
 *@data: represent the datatype and flags
 *@list: arguments
 *Return: number of characters
 **/
int find(const char *data, va_list list)
{
	s_find finder[] = {
		{"c", convert_char},
		{"s", convert_string},
		{"i", convert_integer},
		{"d", convert_double},
		{"u", convert_unsig},
		{"o", convert_integer},
		{"x", convert_integer}
	};
	int i = 0;
	int len = 0;

	for (i = 0; i < 7; i++)
		if (finder[i].type[0] == data[0])
			len = finder[i].print(list);
	return (len);
}
