#include "main.h"

/**
  *jack_bauer - prints every minute of the day
  */
void jack_bauer(void)
{
	int hr, sec;

	for (hr = 0; hr < 24; hr++)
	{
		for (sec = 0; sec < 60; sec++)
		{
			_putchar((hr / 10) + 48);
			_putchar((hr % 10) + 48);
			_putchar(':');
			_putchar((sec / 10) + 48);
			_putchar((sec % 10) + 48);
			_putchar('\n');
		}
	}
}
