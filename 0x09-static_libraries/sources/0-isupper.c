#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: The character to check
 *
 * Return: 1 if c uppercase. 0 otherwise
 */
int isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
