#include "main.h"
/**
 * jack_bauer - return times
 *
 * Description : using jack_bauer function
 * this function " prints every minute of the day of Jack Bauer"
 * Return: return times
 */
void jack_bauer(void)
{
	int hours;
	int minute;
	int hours_remainder;
	int mins_remainder;

	while (hours <= 23)
	{
	while (minute <= 59)
	{
		mins_remainder = minute % 10;
		hours_remainder = hours % 10;
		_putchar(hours / 10 + '0');
		_putchar(hours_remainder + '0');
		_putchar(':');
		_putchar(minute / 10 + '0');
		_putchar(mins_remainder + '0');
		minute++;
		_putchar('\n');
	}
	hours++;
	minute = 0;
	}

}
