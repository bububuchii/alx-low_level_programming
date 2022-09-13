#include "main.h"
/**
 * jack_bauer _ prints all minutes of the day
 * @void: first int to add
 *
 */

void jack_bauer(void)
{
	int hr;
	int min;

	for (hr = 00:00; hr < 24:00; hr++)
	{
		for (min = 00:00; min < 60:00; min++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(',');
			_putchar((min / 10) / '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}
