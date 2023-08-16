#include "main.h"
#include <unistd.h>

/**
 * putchar - writes the character c to stdout
 * 0c: the character to print
 *
 * Return: On sucess 1.
 * On error. -1 is returned, and errno is set apprioately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
