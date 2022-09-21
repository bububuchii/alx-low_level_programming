#include "main.h"

/**
 * string_toupper - changes all lower cases  to capital letters
 * @str: string to modify
 * Description: changes all lower case letters to capital
 * Return: char
 */
char *string_toupper(char *str)
{
	int i;

	for (i = o; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	return (str);
}
