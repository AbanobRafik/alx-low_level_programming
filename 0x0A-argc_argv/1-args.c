#include <stdio.h>

/**
 *  * main - Entry point
 *   *
 *    * @argc: The number of command line arguments
 *     * @argv: An array of strings containing the arguments
 *      *
 *       * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);
	return(0);
}
