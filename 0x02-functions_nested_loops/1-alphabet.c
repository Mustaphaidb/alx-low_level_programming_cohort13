#include "main.h"

/**
 * Print_alphabet - Print all alphabet in lowercase
 * Description: 'TASK1' 
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
