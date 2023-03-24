#include "main.h"
/**
 * more_numbers - prints from 0 to 14 ten times
 * Description: task 5
 * @void: none
 * Return: 0
 */
void more_numbers(void)
{
	int n, i;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
				_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
