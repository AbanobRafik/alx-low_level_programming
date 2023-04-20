#include "variadic_functions.h"

/**
 *  * sum_them_all - calculates the sum of a variable number of integers
 *   *
 *    * @n: the number of integers to sum
 *     * @...: the integers to sum
 *      *
 *       * Return: the sum of the integers, or 0 if n is 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	int sum = 0;

	va_start(arg, n);
	if (n == 0)
		return (0);

	for (int i = 0 ; i < n ; i++)
		sum += va_arg(arg, int);

	va_end(arg);
	return (sum);
}
