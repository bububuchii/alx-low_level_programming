#include <stdio.h>
#include "main.h"
/**
 * swap_int - swap the values of the two integers.
 * @a: value to be evaluate.
 * @b: value to be evaluate.
 * Return: not.
 */
void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
