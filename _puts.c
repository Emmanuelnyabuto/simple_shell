#include <stdio.h>

/**
 * _puts - Prints a string followed by a newline to stdout
 * @str: The string to be printed
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
