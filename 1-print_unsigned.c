#include "holberton.h"
/**
 *print_unsigned - call a recursion function with an iterator
 *@n: number to print
 *Return: lenght of the number
 */
int print_unsigned(unsigned int n)
{
	int i = 0;

	return (recursion_unsigned(n, i));
}
/**
 *recursion_unsigned - print
 *@n: receive a number
 *@cont: count the lenght of number
 *Return: Amount of digits of the number n
 */
int recursion_unsigned(unsigned n, int cont)
{
	if (n / 10)
	{
		cont = recursion_unsigned(n / 10, cont = cont + 1);
	}
	print_char((n % 10) + '0');
	return (cont);
}
