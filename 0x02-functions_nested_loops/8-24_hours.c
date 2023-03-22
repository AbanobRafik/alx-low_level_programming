#include "main.h"

/**
 *  * jack_bauer- prints every minute of the day
 */

void jack_bauer(void)
{
	int hr, min;

	for (hr = 0 ; hr < 24 ; hr++)
	{
		for (min = 0 ; min < 60 ; min++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			putchar(':');
			putchar((minute / 10) + '0');
			putchar((minute % 10) + '0');
			putchar('\n');
		}
	}
}				