#include "main.h"
#include <stdlib.h>

/**
 *  * create_array - Main Entry
 *   * @size: input
 *    * @c: input
 *     * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	char *arr = malloc(sizeof(char) * size);
	unsigned int i;

	if (arr == 0 || size == 0)
	{
		return (NULL);
	}
	for (i = 0 ; i < size ; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
