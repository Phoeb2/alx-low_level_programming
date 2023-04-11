#include <stdio.h>
#include "main.h"

/**
 * main - Prints all argument it receives
 * @argc: Input parameter
 * @argv: Input parameter
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
