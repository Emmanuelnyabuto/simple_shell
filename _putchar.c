#include <unistd.h>

/**
 * _putchar - Writes a character c to stdout
 * @c: The character to be printed
 *
 * Return: On success 1, or -1 on error and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
