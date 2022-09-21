#include "main.h"
/**
 * print_number - print a number using characters
 *
 * @n: parameter
 *
 * Return: void nothing
 */
void print_number(int n)
{
	unsigned int holder = 1, dumy = n, x;

	if (n < 0)
	{
		_putchar('-');
		n =n * -1;
		dumy = n;
	}

	while (dumy >0)
	{
		dumy = dumy / 10;
		holder = holder * 10;
	}

	while (holder != 0)
	{
		x = n / holder;
		n = n % holder;
		holder = holder / 10;
		_putchar('0' + x);
	}
}
