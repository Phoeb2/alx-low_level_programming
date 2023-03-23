#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * 0c: parameter
 *
 * Return: always 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		;
		return (1);
	else
		return (0);
}
