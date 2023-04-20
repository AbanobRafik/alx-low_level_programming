#include "variadic_functions.h"
#include <stdio.h>

/**
 *  * print_numbers - a function that print numbers, followed by a new line.
 *   * @separator: the string to print between integers
 *    * @n: the number of integers to print
 *     * @...: the integers to print
 *      *
 *       * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}

