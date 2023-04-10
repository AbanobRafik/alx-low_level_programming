#include <stdio.h>
#include <stdlib.h>

/**
 *  * main - Multiplies two numbers passed as command line arguments.
 *   *
 *    * @argc: The number of command line arguments passed to the program.
 *     * @argv: An array of strings containing the command line arguments.
 *      *
 *       * Return: 0 if successful, 1 if an error occurred.
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc > 3 || argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", mul);
	}
	return (0);
}
