#include "main.h"
#include <stddef.h>



void rev_string(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		putchar(s[len]);
		len++;
	}

	while (len--)
	{
		putchar(s[len]);
	}
	putchar('\n');
}
