#include "main.h"
/**
 * print_alphabet - prints a to z
 *
 * Description: 'task 1'
 *
 * @void: does not take any parameters
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char c = 'a';

	for (; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
