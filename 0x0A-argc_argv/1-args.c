#include <stdio.h>
#include "main.h"

/**
 * main - Prints the number of arguments passed to it
 * @argc: Input parameter
 * @argv: Input parameter
 * Return: Always
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", (argc - 1));
	return (0);
}
