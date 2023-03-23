#include "main.h"
/**	
 * isdigit - check if c is int digit
 *
 * @c - input for intger digit
 *
 * Return 1 if digit - 0 if not
 *
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else 
		return (0);
}
