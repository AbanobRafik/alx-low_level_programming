#include "main.h"

/**
 *  * puts2 - prints every character of a string
 *   *
 *    * @str: string parameter input
 *     *
 *      * Return: Noting
 */

void puts2(char *str)
{
	int len;

	for (len = 0 ; str[len] != '\0' ; len++)
	{
		if (str[len] % 2 == 0)
			putchar(str[len]);
	}
	putchar('\n');
}
