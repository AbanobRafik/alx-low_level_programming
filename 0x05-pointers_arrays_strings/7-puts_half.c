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
	int len, i;
	int half_len = len / 2;

	while (str[length] != '\0')
	{
		length++;
	}

	if (len % 2 == 0)
	{
		for (i = half_len ; i < len ; i++)
		{
			putchar(str[i]);
		}
		putchar('\n');
	}
	else
	{
		half_len = (len - 1) / 2;
		for (i = half_len ; i < len ; i++)
		{
			putchar(str[i]);
		}
		putchar('\n');
	}
}

