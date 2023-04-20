#include "variadic_functions.h"
#include <stdio.h>

/**
 *  * print_all - prints a variable number of arguments of different types,
 *   *             formatted according to a string
 *    *
 *     * @format: the format string to use
 *      * @...: the arguments to print
 *       *
 *        * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char*);

		if (str)
			printf("%s", str);
		else
			printf("((nil)");
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
		printf("\n");
		va_end(args);
}
