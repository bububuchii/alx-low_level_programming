#include "main.h"
/**
 * puts_half - print half of the string
 * @str: input string to print
 * Description: prints second half of string
 * Return: nothing
 */
void purs_half(char *str)
{
	int i, j;

	i = 0;

	while (str[i] != '\0')
		i++;

	j = i / 2;

	if (i % 2 == 1)
		j++;

	while (j < i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}

