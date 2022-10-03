#include <stdio.h>
#include "main.h"
/**
 * _strlen - return the length of a string.
 * @s: value to be evaluate.
 * Returns: int
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')

		len++;
	return (len);
}
