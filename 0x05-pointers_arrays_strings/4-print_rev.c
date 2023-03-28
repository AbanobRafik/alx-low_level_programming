#include "main.h"

/**
 *  * print_rev - prints a string in reverse
 *   *
 *    * @s: string parameter input
 *     *
 *      * Return: Nothing
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		++len;
	}

	while (len--)
	{
		putchar(s[len]);
	}
	putchar('\n');
}
