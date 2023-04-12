#include "main.h"
#include <stdlib.h>

/**
 *  * _strdup - returns a pointer to a newly allocated space in memory,
 *   *           which contains a copy of the string given as a parameter.
 *    * @str: the string to be duplicated.
 *     *
 *      * Return: On success, a pointer to the duplicated string. On failure,
 *       *         NULL is returned.
 */
char *_strdup(char *str)
{
	unsigned int len, i;
	char *dupl;

	if (str == NULL)
	{
		return (NULL);
	}
	len = 0;
	while (str[len] != '\0')
		len++;

	dupl = malloc(sizeof(char) * (len + 1));
	if (dupl == NULL)
		return (NULL);

	for (i = 0 ; i < len ; i++)
		dupl[i] = str[i];

	return (dupl);

}
