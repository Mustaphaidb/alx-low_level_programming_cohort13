#include "main.h"

/**
 * print_most_numbers - from 0 to 9 except 2 and 4
 * Description: 'task 4'.
 *
 * @void: none
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		if (n == 50 || n == 52)
			continue;
		_putchar(n);
	}
	_putchar('\n');
}
