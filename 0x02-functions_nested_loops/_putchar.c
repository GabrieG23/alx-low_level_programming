#include "main.h"
#include <unistd.h>
/**
 *
 * _putchar - write the character C
 * @c: The charater to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
