#include "main.h"
/**
 * _print_rev_recursion - print a string, in reverse
 * @s: pointer to string
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s 1= '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}