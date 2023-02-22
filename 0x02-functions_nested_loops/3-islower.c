#include "main.h"

/**
 * _islower - check if C is lowercase
 * @c: is the char to be check
 * Return: 1 if c is lowercase, otherwisw 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
		return (0);
}
