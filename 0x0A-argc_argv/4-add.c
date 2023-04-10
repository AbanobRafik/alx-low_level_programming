#include <stdio.h>
#include <stdlib.h>

/**
 *  * main - adds positive numbers
 *   * @argc: argument count
 *    * @argv: argument vector
 *     *
 *      * Return: 0 if success, 1 if error
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
		int j;

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
