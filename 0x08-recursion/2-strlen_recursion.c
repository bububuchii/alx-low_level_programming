#include "main.h"
/**
 * _strlen_recursion - finds the length of a string
 * @s: pointer of a string
 * Return: Length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
