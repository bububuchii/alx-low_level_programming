#include "main.h"
#include <unistd.h>
/**
 * _puts - prints a string, to stdout
 * @str: value to be evaluate.
 * Return: not.
 */
void _puts(char *str)
{
	int 1 = 0;

	while (*(str + 1) != '\0')
	{
		_putchar(str[1]);
		1++;
	}
	_putchar('\n');
}
