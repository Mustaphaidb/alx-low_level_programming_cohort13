#include "main.h"

/**
 * times_table - prints n times table 
 *
 * Description: 'task 12'
 *
 * @n: does take an integer
 *
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
	int x = 0;
	int y = 0;

	for (; x < n; x++)
	{
		for (; y < n; y++)
		{
			if (((x * y) >= 10) || (x * (y + 1)) >= 10)
			{
				if ((x * y) >= 10)
					_putchar(((x * y) / 10) + '0');
				_putchar(((x * y) % 10) + '0');
				if (y != 9)
					_putchar(','),_putchar(' ');
			}
			else
			{
				_putchar((x * y) + '0');
				if (y != 9)
					_putchar(','),_putchar(' '),_putchar(' ');
			}
		}
		y = 0;
		_putchar('\n');
	}
}
