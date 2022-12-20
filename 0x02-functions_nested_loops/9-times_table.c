#include "main.h"
/**
 * times_table - return 9 times tables
 *
 * Descripton : using times_table
 * this function "prints 9 times table"
 * Return: times tables
 */
void times_table(void)
{
	int num, mult, prod, y, z;

	for (num = 0; num <= 9; num++)
	{
		for (mult = 0; mult <= 9; mult++)
		{
			prod = num * mult;
			if (prod > 0)
			{
				y = prod % 10;
				z = (prod - y) / 10;
			_putchar(44);
			_putchar(32);
			_putchar(z + '0');
			_putchar(y + '0');
			}
			else
			{
			if (mult != 0)
			{
			_putchar(44);
			_putchar(32);
			_putchar(32);
			}
			_putchar(prod + '0');
			}
		}
		_putchar('\n');


}
}

