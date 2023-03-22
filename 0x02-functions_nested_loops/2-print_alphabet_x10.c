#include "main.h"
/**
 * print_alphabet_x10 - prints a to z 10 times
 *
 * Description: 'task 2'
 *
 * @void: does not take any parameters
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char c = 'a';

	for (; i < 10; i++)
	{
		for (; c <= 'z'; c++)
		{
			_putchar(c);
		}
		c = 'a';
		_putchar('\n');
	}
}
