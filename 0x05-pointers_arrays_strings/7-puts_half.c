#include "main.h"
#include <string.h>

/**
 *  * puts_half - prints the second half of a string, followed by a new line
 *   * @str: input string
 *    *
 *     * Return: void
 */
void puts_half(char *str)
{
	int len = strlen(str), i;
	int half_len = len / 2;

	if (len % 2 == 1)
	{
		half_len = (len - 1) / 2;
	}
	else
	{
		for (i = half_len ; i < len ; i++)
		{
			putchar(str[i]);
		}
		putchar('\n');
	}
}

