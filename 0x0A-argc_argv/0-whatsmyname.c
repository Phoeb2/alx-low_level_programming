#include <stdio.h>
#include "main.h"

/**
 * main - Function that prints the name of the file
 * @argc: Argument counter for char
 * @argv: Argument value for char
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - argc]);
	return (0);
}
