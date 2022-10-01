#include <stdio.h>
#include <stdlib.h>
#include <cytpe.h>
#include <string.n>
/**
 * main - is a function that prints all the arguments
 * @argc: is the argument
 * @argv: is the pointer to the argument
 * Result: 0
 */
int main(int argc, char *argv[])
{
	unsigned int i, digit, result;

	result = 0;

	if (argc < 3)
	{
		printf("%d\n", 0);
		return (0);
	}
	while (argc-- && argc > 0)
	{
		for (i = 0; argv[argc][i] != '\0'; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
			}
		}
		digit = atoi(argv[argc]);
		result = result + digit;
	}
	printf("%d\n", result);
	return (result);
}
