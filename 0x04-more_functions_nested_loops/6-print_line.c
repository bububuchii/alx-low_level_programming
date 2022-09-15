#include "main.h"
/**
 * print_line - Write a function that draws a straight line int the terminal
 * @n: Integer amount of _
 * Return: Always 0.
 */
void print_line(int n)
{
	char x;

	for (x = 0; x < n; x++)
		_putchar('_');
	_putchar('\n');
}
