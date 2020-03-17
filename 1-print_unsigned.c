#include "holberton.h"
/**
 *print_unsig - call a recursion function with an iterator
 *@n: number to print
 *Return: lenght of the number
 */
int print_unsig(unsigned int n)
{
	int i = 0;

	return (recursion_unsig(n, i));
}
/**
 *recursion_unsig - print
 *@n: receive a number
 *@cont: count the lenght of number
 *Return: Amount of digits of the number n
 */
int recursion_unsig(unsigned int n, int cont)
{
	if (n / 10)
	{
		cont = recursion_unsig(n / 10, cont = cont + 1);
	}
	print_char((n % 10) + '0');
	return (cont);
}
