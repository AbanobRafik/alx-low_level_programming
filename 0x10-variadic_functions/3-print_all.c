#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *  * print_char - Prints a char
 *   *
 *    * @arg: va_list argument pointer
 */
void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 *  * print_integer - Prints an integer
 *   *
 *    * @arg: va_list argument pointer
 */
void print_integer(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 *  * print_float - Prints a float
 *   *
 *    * @arg: va_list argument pointer
 */
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 *  * print_string - Prints a string
 *   *
 *    * @arg: va_list argument pointer
 */
void print_string(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}

/**
 *  * print_all - Prints anything
 *   *
 *    * @format: Format of the input arguments
 *     *          c: char
 *      *          i: integer
 *       *          f: float
 *        *          s: char * (if the string is NULL, print (nil) instead
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	int i = 0, j;
	char *separator = "";

	printer_t printers[] = {
		{'c', print_char},
		{'i', print_integer},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(arg, format);

	while (format && format[i])
	{
		j = 0;
		while (printers[j].type)
		{
			if (printers[j].type == format[i])
			{
				printf("%s", separator);
				printers[j].func(arg);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(arg);
}
